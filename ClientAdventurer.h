#pragma once
#include <string>
#include <iostream>
#include <stdio.h>

#include <winsock2.h>
#include <WS2tcpip.h>
#pragma comment(lib, "Ws2_32.lib")
#pragma comment (lib, "Mswsock.lib")
#pragma comment (lib, "AdvApi32.lib")


/*------------------------------------
* note cant use close() must use closesocket()
* select() only works with socket discriptors not file descriptors
* maight be able to use CSocket????? check on this.
* will have to multithread.
*/

class ClientAdventurer
{
public:
	ClientAdventurer();
    ClientAdventurer(PCSTR ip_in);
	~ClientAdventurer();

private:

	//std::string username;
	//char* serverIp;
	//int port;
	WSADATA wsaData;
	sockaddr_in sa;
	int status;
	addrinfo hints;
	addrinfo* servinfo;
};