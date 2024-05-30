// Server

#include <iostream>
#include <string>
#include <sys/socket.h>
#include <netinet/in.h>

int main() {
    int serverSocket = socket(AF_INET, SOCK_STREAM, 0);

    sockaddr_in serverAddress;
    serverAddress.sin_family = AF_INET;
    serverAddress.sin_port = htons(54000);
    serverAddress.sin_addr.s_addr = INADDR_ANY;

    bind(serverSocket, (struct sockaddr*)&serverAddress, sizeof(serverAddress));

    listen(serverSocket, 1);

    int clientSocket = accept(serverSocket, NULL, NULL);

    std::string message = "Hello from server!";
    send(clientSocket, message.c_str(), message.size() + 1, 0);

    close(serverSocket);
    return 0;
}

// Client

#include <iostream>
#include <string>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

int main() {
    int clientSocket = socket(AF_INET, SOCK_STREAM, 0);

    sockaddr_in clientAddress;
    clientAddress.sin_family = AF_INET;
    clientAddress.sin_port = htons(54000);
    inet_pton(AF_INET, "127.0.0.1", &clientAddress.sin_addr);

    connect(clientSocket, (struct sockaddr*)&clientAddress, sizeof(clientAddress));

    char buffer[4096];
    recv(clientSocket, buffer, sizeof(buffer), 0);

    std::cout << "Server: " << std::string(buffer) << std::endl;

    close(clientSocket);
    return 0;
}
