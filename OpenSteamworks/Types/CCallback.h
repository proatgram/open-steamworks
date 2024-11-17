//==========================  Open Steamworks  ================================
//
// This file is part of the Open Steamworks project. All individuals associated
// with this project do not claim ownership of the contents
// 
// The code, comments, and all related files, projects, resources,
// redistributables included with this project are Copyright Valve Corporation.
// Additionally, Valve, the Valve logo, Half-Life, the Half-Life logo, the
// Lambda logo, Steam, the Steam logo, Team Fortress, the Team Fortress logo,
// Opposing Force, Day of Defeat, the Day of Defeat logo, Counter-Strike, the
// Counter-Strike logo, Source, the Source logo, and Counter-Strike Condition
// Zero are trademarks and or registered trademarks of Valve Corporation.
// All other trademarks are property of their respective owners.
//
//=============================================================================

#pragma once

#include "SteamTypes.h"

//-----------------------------------------------------------------------------
// Purpose: base for callbacks, 
//			used only by CCallback, shouldn't be used directly
//-----------------------------------------------------------------------------
class CCallbackBase {
    public:
        CCallbackBase() { m_nCallbackFlags = 0; m_iCallback = 0; }
        // don't add a virtual destructor because we export this binary interface across dll's
        virtual auto Run( void *pvParam ) -> void = 0;
        virtual auto Run( void *pvParam, bool bIOFailure, SteamAPICall_t hSteamAPICall ) -> void = 0;
        inline auto GetICallback() -> int { return m_iCallback; }
        virtual auto GetCallbackSizeBytes() -> int = 0;

    protected:
        enum { k_ECallbackFlagsRegistered = 0x01, k_ECallbackFlagsGameServer = 0x02 };
        uint8 m_nCallbackFlags;
        int m_iCallback;
        friend class CCallbackMgr;
};

//-----------------------------------------------------------------------------
// Purpose: maps a steam async call result to a class member function
//			template params: T = local class, P = parameter struct
//-----------------------------------------------------------------------------
template< class T, class P >
class CCallResult : private CCallbackBase {
    public:
        using func_t = void (T::*)(P*, bool);

        inline CCallResult() :
            CCallbackBase(P::k_iCallback),
            m_hAPICall(k_uAPICallInvalid),
            m_pObj(nullptr),
            m_Func(nullptr) {}

        inline auto Set( SteamAPICall_t hAPICall, T *p, func_t func ) -> void {
            if ( m_hAPICall )
                SteamAPI_UnregisterCallResult( this, m_hAPICall );

            m_hAPICall = hAPICall;
            m_pObj = p;
            m_Func = func;

            if ( hAPICall )
                SteamAPI_RegisterCallResult( this, hAPICall );
        }

        inline auto IsActive() const -> bool {
            return ( m_hAPICall != k_uAPICallInvalid );
        }

        inline auto Cancel() -> void {
            if ( m_hAPICall != k_uAPICallInvalid ) {
                SteamAPI_UnregisterCallResult( this, m_hAPICall );
                m_hAPICall = k_uAPICallInvalid;
            }
        }

        inline ~CCallResult() {
            Cancel();
        }

    private:
        inline virtual auto Run( void *pvParam ) -> void {
            m_hAPICall = k_uAPICallInvalid; // caller unregisters for us
            (m_pObj->*m_Func)( (P *)pvParam, false );		
        }

        inline auto Run( void *pvParam, bool bIOFailure, SteamAPICall_t hSteamAPICall ) -> void {
            if ( hSteamAPICall == m_hAPICall ) {
                m_hAPICall = k_uAPICallInvalid; // caller unregisters for us
                (m_pObj->*m_Func)( (P *)pvParam, bIOFailure );			
            }
        }

        inline auto GetCallbackSizeBytes() -> int {
            return sizeof( P );
        }

        SteamAPICall_t m_hAPICall;
        T *m_pObj;
        func_t m_Func;
};



//-----------------------------------------------------------------------------
// Purpose: maps a steam callback to a class member function
//			template params: T = local class, P = parameter struct
//-----------------------------------------------------------------------------
template< class T, class P, bool bGameServer >
class CCallback : private CCallbackBase {
    public:
        using func_t = void (T::*)( P* );

        // If you can't support constructing a callback with the correct parameters
        // then uncomment the empty constructor below and manually call
        // ::Register() for your object
        // Or, just call the regular constructor with (nullptr, nullptr)

#ifdef ENABLE_CALLBACK_EMPTY_CONSTRUCTOR
        CCallback() {}
#endif
        // constructor for initializing this object in owner's constructor
        inline CCallback( T *pObj, func_t func ) : m_pObj( pObj ), m_Func( func ) {
            if ( pObj && func ) {
                Register( pObj, func );
            }
        }

        inline ~CCallback() {
            if ( m_nCallbackFlags & k_ECallbackFlagsRegistered ) {
                Unregister();
            }
        }

        // manual registration of the callback
        inline auto Register( T *pObj, func_t func ) -> void {
            if ( !pObj || !func ) {
                return;
            }

            if ( m_nCallbackFlags & k_ECallbackFlagsRegistered ) {
                Unregister();
            }

            if ( bGameServer ) {
                m_nCallbackFlags |= k_ECallbackFlagsGameServer;
            }

            m_pObj = pObj;
            m_Func = func;

            // SteamAPI_RegisterCallback sets k_ECallbackFlagsRegistered
            SteamAPI_RegisterCallback( this, P::k_iCallback );
        }

        inline auto Unregister() -> void {
            // SteamAPI_UnregisterCallback removes k_ECallbackFlagsRegistered
            SteamAPI_UnregisterCallback( this );
        }

        inline auto SetGameserverFlag() -> void { m_nCallbackFlags |= k_ECallbackFlagsGameServer; }

    private:
        inline virtual auto Run( void *pvParam ) -> void {
            (m_pObj->*m_Func)( (P *)pvParam );
        }

        inline virtual auto Run( void *pvParam, bool, SteamAPICall_t ) -> void {
            (m_pObj->*m_Func)( (P *)pvParam );
        }

        inline auto GetCallbackSizeBytes() -> int {
            return sizeof( P );
        }

        T *m_pObj;
        func_t m_Func;
};


// Allows you to defer registration of the callback
template< class T, class P, bool bGameServer >
class CCallbackManual : public CCallback< T, P, bGameServer > {
    public:
        CCallbackManual() : CCallback< T, P, bGameServer >( nullptr, nullptr ) {}
};



#ifdef _MSC_VER
	// disable this warning; this pattern need for steam callback registration
	#pragma warning( disable: 4355 )	// 'this' : used in base member initializer list
#endif

// utility macro for declaring the function and callback object together
#define STEAM_CALLBACK( thisclass, func, param, var ) CCallback< thisclass, param, false > var; void func( param *pParam )
#define STEAM_GAMESERVER_CALLBACK( thisclass, func, param, var ) CCallback< thisclass, param, true > var; void func( param *pParam )

// same as above, but lets you defer the callback binding by calling Register later
#define STEAM_CALLBACK_MANUAL( thisclass, func, param, var ) CCallbackManual< thisclass, param, false > var; void func( param *pParam )
