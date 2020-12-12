#pragma once
#include <string>
#include <iostream>
#include <stdio.h>

#include <winsock2.h>
#include <WS2tcpip.h>
#pragma comment(lib, "Ws2_32.lib")
#pragma comment (lib, "Mswsock.lib")
#pragma comment (lib, "AdvApi32.lib")


class ClientAdventurer
{
public:
	ClientAdventurer();
	~ClientAdventurer();

private:

	WSADATA wsaData;

	std::string username;
	char* serverIp;
	int port;

};