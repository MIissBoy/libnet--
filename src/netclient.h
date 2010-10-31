//netClient.h
//  See netbase.h for base functions

#ifndef NETCLIENT_H
#define NETCLIENT_H

#include "netbase.h"
class netclient : public netbase {

public:
    netclient( unsigned int maxConnections);
    ~netclient();

    //Open a connection and return connection ID
    int doConnect( const std::string& address, int remotePort, int localPort = 0);
    int run();      //Look for incoming messages
    bool setConnTimeout( int seconds=3, int microsec=0);


protected:
    struct timeval connTimeout;     //Connection timeout

};

#endif
