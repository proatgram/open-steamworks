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

// servernetadr_t is all the addressing info the serverbrowser needs to know about a game server,
// namely: its IP, its connection port, and its query port.
class servernetadr_t  {
    public:

        auto Init( unsigned int ip, uint16 usQueryPort, uint16 usConnectionPort ) -> void;
#ifdef NETADR_H
        auto Init( const netadr_t &ipAndQueryPort, uint16 usConnectionPort ) -> void;
        auto GetIPAndQueryPort() -> netadr_t&;
#endif

        // Access the query port.
        auto GetQueryPort() const -> uint16;
        auto SetQueryPort( uint16 usPort ) -> void;

        // Access the connection port.
        auto GetConnectionPort() const -> uint16;
        auto SetConnectionPort( uint16 usPort ) -> void;

        // Access the IP
        auto GetIP() const -> uint32;
        auto SetIP( uint32 ) -> void;

        // This gets the 'a.b.c.d:port' string with the connection port (instead of the query port).
        const char *GetConnectionAddressString() const;
        const char *GetQueryAddressString() const;

        // Comparison operators and functions.
        bool	operator<(const servernetadr_t &netadr) const;
        void operator=( const servernetadr_t &that )
        {
            m_usConnectionPort = that.m_usConnectionPort;
            m_usQueryPort = that.m_usQueryPort;
            m_unIP = that.m_unIP;
        }

    private:
        auto ToString( uint32 unIP, uint16 usPort ) const -> const char*;
        uint16	m_usConnectionPort;	// (in HOST byte order)
        uint16	m_usQueryPort;
        uint32  m_unIP;
};


inline auto servernetadr_t::Init( unsigned int ip, uint16 usQueryPort, uint16 usConnectionPort ) -> void {
	m_unIP = ip;
	m_usQueryPort = usQueryPort;
	m_usConnectionPort = usConnectionPort;
}

#ifdef NETADR_H
inline auto	servernetadr_t::Init( const netadr_t &ipAndQueryPort, uint16 usConnectionPort ) -> void {
	Init( ipAndQueryPort.GetIP(), ipAndQueryPort.GetPort(), usConnectionPort );
}

inline auto servernetadr_t::GetIPAndQueryPort() -> netadr_t& {
	static netadr_t netAdr;
	netAdr.SetIP( m_unIP );
	netAdr.SetPort( m_usQueryPort );
	return netAdr;
}
#endif

inline auto servernetadr_t::GetQueryPort() const -> uint16 {
	return m_usQueryPort;
}

inline auto	servernetadr_t::SetQueryPort( uint16 usPort ) -> void {
	m_usQueryPort = usPort;
}

inline auto servernetadr_t::GetConnectionPort() const -> uint16 {
	return m_usConnectionPort;
}

inline auto	servernetadr_t::SetConnectionPort( uint16 usPort ) -> void {
	m_usConnectionPort = usPort;
}

inline auto servernetadr_t::GetIP() const -> uint32 {
	return m_unIP;
}

inline auto	servernetadr_t::SetIP( uint32 unIP ) -> void {
	m_unIP = unIP;
}

#ifdef _S4N_
	#define snprintf(...)
#elif defined(_MSC_VER)
	#pragma warning(push) 
	#pragma warning(disable: 4996) 
	#ifndef snprintf
		#define snprintf _snprintf
	#endif	
#endif

inline auto servernetadr_t::ToString( uint32 unIP, uint16 usPort ) const -> const char*{
	static char s[4][64];
	static int nBuf = 0;
	unsigned char *ipByte = (unsigned char *)&unIP;
	snprintf(s[nBuf], sizeof( s[nBuf] ), "%u.%u.%u.%u:%i", (int)(ipByte[3]), (int)(ipByte[2]), (int)(ipByte[1]), (int)(ipByte[0]), usPort );
	s[nBuf][sizeof(s[nBuf]) - 1] = '\0';
	const char *pchRet = s[nBuf];
	++nBuf;
	nBuf %= ( (sizeof(s)/sizeof(s[0])) );
	return pchRet;
}

#ifdef _MSC_VER
	#pragma warning(pop) 
#endif


inline auto servernetadr_t::GetConnectionAddressString() const -> const char* {
	return ToString( m_unIP, m_usConnectionPort );
}

inline auto servernetadr_t::GetQueryAddressString() const -> const char* {
	return ToString( m_unIP, m_usQueryPort );	
}

inline auto servernetadr_t::operator<(const servernetadr_t &netadr) const -> bool {
	return ( m_unIP < netadr.m_unIP ) || ( m_unIP == netadr.m_unIP && m_usQueryPort < netadr.m_usQueryPort );
}
