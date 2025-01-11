#define STEAMWORKS_CLIENT_INTERFACES

#include <OpenSteamworks.hpp>

class TestClient
{
public:
	TestClient(): m_cbLoggedOn(this, &TestClient::OnLoggedOn),
		m_cbLogOnfailed(this, &TestClient::OnLogOnFailed)
	{
	}

	~TestClient() {}

	bool Init();
	void SetLogOnInfo(const char* username, const char* password, bool save);
	void Connect();
	
	void RunCallbacks();

private:
	IClientEngine* m_pClientEngine;
	IClientUser* m_pClientUser;
	IClientFriends* m_pClientFriends;

	HSteamPipe m_hPipe;
	HSteamUser m_hUser;

	STEAM_CALLBACK(TestClient, OnLoggedOn, SteamServersConnected_t, m_cbLoggedOn);
	STEAM_CALLBACK(TestClient, OnLogOnFailed, SteamServerConnectFailure_t, m_cbLogOnfailed);

	STEAM_CALLBACK_MANUAL(TestClient, OnLoggedOnManual, SteamServersConnected_t, m_cbLoggedOn2);
};

bool TestClient::Init()
{
	m_pClientEngine = reinterpret_cast<IClientEngine*>(SteamInternal_CreateInterface(CLIENTENGINE_INTERFACE_VERSION.data()));
	if (!m_pClientEngine)
	{
		fprintf(stderr, "Unable to get the client engine.\n");
		return false;
	}

	m_hUser = m_pClientEngine->CreateLocalUser(&m_hPipe, k_EAccountTypeIndividual);
	if (!m_hUser || !m_hPipe)
	{
		fprintf(stderr, "Unable to create the global user.\n");
		return false;
	}

	m_pClientUser = (IClientUser*)m_pClientEngine->GetIClientUser(m_hUser, m_hPipe);
	if (!m_pClientUser)
	{
		fprintf(stderr, "Unable to get the client user interface.\n");
		return false;
	}

	m_pClientFriends = (IClientFriends*)m_pClientEngine->GetIClientFriends(m_hUser, m_hPipe);
	if (!m_pClientFriends)
	{
		fprintf(stderr, "Unable to get the client friends interface.\n");
		return false;
	}

	return true;
}

void TestClient::Connect()
{
	CSteamID steamID = m_pClientUser->GetSteamID();
	m_pClientUser->LogOn(steamID);
}

void TestClient::RunCallbacks()
{
	Steam_RunCallbacks(m_hPipe, false);
}

void TestClient::SetLogOnInfo(const char * username, const char * password, bool save)
{
	m_pClientUser->SetLoginInformation(username, password, save);
}

void TestClient::OnLoggedOn(SteamServersConnected_t* cbMsg)
{
	printf("TestClient::OnLoggedOn Logged in\n");
	m_cbLoggedOn2.Register(this, &TestClient::OnLoggedOnManual);
}

void TestClient::OnLoggedOnManual(SteamServersConnected_t* cbMsg)
{
	printf("TestClient::OnLoggedOnManual Logged in\n");
	m_pClientFriends->SetPersonaState(k_EPersonaStateOnline);
}

void TestClient::OnLogOnFailed(SteamServerConnectFailure_t* cbMsg)
{
	switch (cbMsg->m_eResult)
	{
		case k_EResultAccountLogonDenied:
			{
				printf("Steam guard code required: ");
				char szAuthCode[8] = "";
				if (fgets(szAuthCode, sizeof(szAuthCode), stdin))
				{
					szAuthCode[strlen(szAuthCode) - 1] = 0;
				}

				m_pClientUser->Set2ndFactorAuthCode(szAuthCode, true);
				Connect();
			}
			break;
		case k_EResultAccountLoginDeniedNeedTwoFactor:
			{
				printf("Steam 2FA code required: ");
				char sz2FACode[8] = "";
				if (fgets(sz2FACode, sizeof(sz2FACode), stdin))
				{
					sz2FACode[strlen(sz2FACode) - 1] = 0;
				}

				m_pClientUser->SetTwoFactorCode(sz2FACode);
				Connect();
			}
			break;
		default:
			printf("Log on failed with EResult %d\n", cbMsg->m_eResult);
	}
}

int main()
{
	if ( !OpenAPI_LoadLibrary())
	{
		fprintf(stderr, "Unable to load steamclient library.\n");
		return 1;
	}

	char szUsername[128] = "";
	char szPassword[128] = "";

	printf("Enter your username: ");
	if(fgets(szUsername, sizeof(szUsername), stdin))
	{
		szUsername[strlen(szUsername) - 1] = 0;
	}
	
	printf("Enter your password: ");
	if(fgets(szPassword, sizeof(szPassword), stdin))
	{
		szPassword[strlen(szPassword) - 1] = 0;
	}

	TestClient testClient;
	if(!testClient.Init()) 
	{
		fprintf(stderr, "Could not initialize steamclient\n");
		return 1;
	}

	testClient.SetLogOnInfo(szUsername, szPassword, false);
	testClient.Connect();
		
	while ( true )
	{
		testClient.RunCallbacks();

#ifdef _WIN32
		Sleep(100);
#else
		usleep(100000);
#endif
	}

	return 0;
}
