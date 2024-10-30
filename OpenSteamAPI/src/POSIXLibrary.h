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

#include <filesystem>
#include <string>

#include <dlfcn.h>

class DynamicLibrary {
    public:
        DynamicLibrary(const std::filesystem::path &cszPath) {
            m_handle = dlopen(cszPath.c_str(), RTLD_LAZY);
        }
        
        ~DynamicLibrary() {
            if(m_handle)
                dlclose(m_handle);
        }
        
        void * GetSymbol(const std::string &cszSymbol) const {
            if(!m_handle)
                return nullptr;

            return dlsym(m_handle, cszSymbol.c_str());
        }
        
        bool IsLoaded() const {
            return m_handle != nullptr;
        }
	
    private:
        void *m_handle;
        
        DynamicLibrary(const DynamicLibrary&);
        void operator=(const DynamicLibrary&);
};
