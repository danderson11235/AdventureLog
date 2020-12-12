#include "ClientAdventurer.h"

int main()
{
	return 0;
}

ClientAdventurer::ClientAdventurer()
{
	if (WSAStartup(MAKEWORD(2, 0), &wsaData) != 0)
	{
		std::cout << "WSAStartup failed.\n";
		exit(1);
	}
	inet_pton(AF_INET, "127.0.0.1", &(sa.sin_addr));
	status = 0;
	memset(&hints, 0, sizeof hints);
	hints.ai_family = AF_UNSPEC;
	hints.ai_socktype = SOCK_STREAM;
	hints.ai_flags = AI_PASSIVE;
	servinfo = nullptr;
}

ClientAdventurer::ClientAdventurer(PCSTR ip_in)
{
	if (WSAStartup(MAKEWORD(2, 0), &wsaData) != 0)
	{
		std::cout << "WSAStartup failed.\n";
		exit(1);
	}
	inet_pton(AF_INET, ip_in, &(sa.sin_addr));
	memset(&hints, 0, sizeof hints);
	
	hints.ai_family = AF_UNSPEC;
	hints.ai_socktype = SOCK_STREAM;
	hints.ai_flags = AI_PASSIVE;
	
	if ((status = getaddrinfo(NULL, "3490", &hints, &servinfo)) != 0) {
		fprintf(stderr, "getaddrinfo error: %s\n", gai_strerror(status));
		exit(1);
	}
}

ClientAdventurer::~ClientAdventurer()
{
	if (servinfo != nullptr) FreeAddrInfo(servinfo);
	WSACleanup();
}
