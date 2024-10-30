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

#include "Types/SteamTypes.h"
#include "Interface_OSW.h"

CSteamAPILoader::CSteamAPILoader(ESearchOrder eSearchOrder) {
	m_eSearchOrder = eSearchOrder;
	m_pSteamclient = NULL;
}

CSteamAPILoader::~CSteamAPILoader() {
	if(m_pSteamclient) {
		delete m_pSteamclient;
    }
}

bool CSteamAPILoader::Load() {
	TryGetSteamDir();
	TryLoadLibraries();

	return m_pSteamclient->IsLoaded();
}

CreateInterfaceFn CSteamAPILoader::GetSteam3Factory() {
	return (CreateInterfaceFn)m_pSteamclient->GetSymbol("CreateInterface");
}

std::string CSteamAPILoader::GetSteamDir() {
	return m_szSteamPath;
}
	
const DynamicLibrary* CSteamAPILoader::GetSteamClientModule() {
	return m_pSteamclient;
}

#ifdef _MSC_VER
	#pragma warning(push) 
	#pragma warning(disable: 4996) 
#endif

void CSteamAPILoader::TryGetSteamDir() {
#ifdef _WIN32
	HKEY hRegKey;

	bool bFallback = true;
#ifdef _WIN64
	if (RegOpenKeyExA(HKEY_LOCAL_MACHINE, "Software\\Wow6432Node\\Valve\\Steam", 0, KEY_QUERY_VALUE, &hRegKey) == ERROR_SUCCESS)
#else
	if (RegOpenKeyExA(HKEY_LOCAL_MACHINE, "Software\\Valve\\Steam", 0, KEY_QUERY_VALUE, &hRegKey) == ERROR_SUCCESS)
#endif
	{
		DWORD dwLength = sizeof(m_szSteamPath) - 1;
		if(RegQueryValueExA(hRegKey, "InstallPath", nullptr, nullptr, (BYTE*)m_szSteamPath.data(), &dwLength) == ERROR_SUCCESS) {
			m_szSteamPath[dwLength] = '\0';
			bFallback = false;
		}
		RegCloseKey(hRegKey);
	}

	if(bFallback) {
		strcpy(m_szSteamPath.data(), ".");
	}
#elif defined(__APPLE_CC__)
	bool bFallback = true;

	if (GetApplicationSupportPath(m_szSteamPath, sizeof(m_szSteamPath))) {
        m_szSteamPath.append("/Steam/Steam.AppBundle/Steam/Contents/MacOS/");
		bFallback = false;
	}

	if (bFallback) {
		strcpy(m_szSteamPath.data(), ".");
	}
#elif defined(__linux__)
	bool bFallback = true;

	char* szHome = getpwuid(getuid())->pw_dir;

    m_szSteamPath.append(szHome);

    // TODO: Rewrite because steamclient.so is only in 32 bit prefix
#ifdef __LP64__
    m_szSteamPath.append("/.steam/sdk64/");
#else
    m_szSteamPath.append("/.steam/sdk32/");
#endif

	struct stat info;
	if (stat(m_szSteamPath.c_str(), &info) == 0) {
		if (S_ISDIR(info.st_mode)) {
			bFallback = false;
		}
	}

	if (bFallback) {
		strcpy(m_szSteamPath.data(), ".");
	}
#endif
}

void CSteamAPILoader::TryLoadLibraries() {
	if(m_eSearchOrder == k_ESearchOrderLocalFirst) {
		m_pSteamclient = new DynamicLibrary(k_cszSteam3LibraryName.data());

		if(!m_pSteamclient->IsLoaded()) {
			delete m_pSteamclient;
			m_pSteamclient = nullptr;
		}
		else {
			return;
        }
	}

#ifdef _WIN32
	// steamclient.dll expects to be able to load tier0_s without an absolute
	// path, so we'll need to add the steam dir to the search path.
	SetDllDirectoryA( m_szSteamPath );
#endif

    std::string szLibraryPath = m_szSteamPath + "/" + k_cszSteam3LibraryName.data();
	m_pSteamclient = new DynamicLibrary(szLibraryPath);
}


#ifdef _MSC_VER
	#pragma warning(pop) 
#endif
