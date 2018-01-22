// Server side C/C++ program to demonstrate Socket programming
#include <cstdio>
#include <cstdlib>

#include <winsock2.h>
#include <unistd.h>
#include <iostream>
#include "ConnectionManager/Server/SocketManager.h"

#define PORT 10000
int main(int argc, char const *argv[])
{
    int a;
    a = 4;

    if (a == nullptr)
    {

    }
    Server::SocketManager manager(10000,"127.0.0.1");
    manager.prepareConnection();
    manager.listenForConnection();

    while(1)
    {
        std::string cos = manager.receiveData();
        std::cout<< cos;
    }

//    manager.sendData("Jakis testowy string");
//    sleep(10);
//    manager.sendData("Jakis testowy string2");
//    manager.sendData("Jakis testowy string3");
//    WSAData wsaData;
//
//    int result = WSAStartup( MAKEWORD( 2, 2 ), & wsaData );
//    if( result != NO_ERROR )
//        printf( "Initialization error.\n" );
//
//    SOCKET mainSocket = socket( AF_INET, SOCK_STREAM, IPPROTO_TCP );
//    if( mainSocket == INVALID_SOCKET )
//    {
//        printf( "Error creating socket: %ld\n", WSAGetLastError() );
//        WSACleanup();
//        return 1;
//    }
//
//    sockaddr_in service;
//    memset( & service, 0, sizeof( service ) );
//    service.sin_family = AF_INET;
//    service.sin_addr.s_addr = inet_addr( "127.0.0.1" );
//    service.sin_port = htons( PORT );
//
//    if( bind( mainSocket,( SOCKADDR * ) & service, sizeof( service ) ) == SOCKET_ERROR )
//    {
//        printf( "bind() failed.\n" );
//        closesocket( mainSocket );
//        return 1;
//    }
//
//    if( listen( mainSocket, 1 ) == SOCKET_ERROR )
//        printf( "Error listening on socket.\n" );
//
//
//
//
//
//
//    SOCKET acceptSocket = SOCKET_ERROR;
//    printf( "Waiting for a client to connect...\n" );
//
//    while( acceptSocket == SOCKET_ERROR )
//    {
//        acceptSocket = accept( mainSocket, NULL, NULL );
//    }
//
//    printf( "Client connected.\n" );
//    mainSocket = acceptSocket;
//
//    int bytesSent;
//    int bytesRecv = SOCKET_ERROR;
//    char sendbuf[ 32 ] = "Server says hello!";
//    char recvbuf[ 32 ] = "";
//
//    bytesRecv = recv( mainSocket, recvbuf, 32, 0 );
//    printf( "Bytes received: %ld\n", bytesRecv );
//    printf( "Received text: %s\n", recvbuf );
//
//    bytesSent = send( mainSocket, sendbuf, strlen( sendbuf ), 0 );
//    printf( "Bytes sent: %ld\n", bytesSent );
//
//    system( "pause" );
}