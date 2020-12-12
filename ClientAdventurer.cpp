#include "ClientAdventurer.h"
#include <WS2tcpip.h>

ClientAdventurer::ClientAdventurer()
{
	int iResult;
	iResult = WSAStartup(MAKEWORD(2, 2), &wsaData);
	if (iResult != 0)
	{
		std::cout << "Startup failed" << iResult << std::endl;
	}
	struct addrinfo
		* result = NULL,
		* ptr = NULL,
		hints;

}

ClientAdventurer::~ClientAdventurer()
{
}
