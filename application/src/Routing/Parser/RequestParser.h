//
// Created by Michal on 28.01.2018.
//

#ifndef AET_REQUESTPARSER_H
#define AET_REQUESTPARSER_H


#include "Request.h"

class RequestParser {
public:
    explicit RequestParser(std::string requestPath);
    Request::Request* getRequest();

private:
    Request::Request* request;
};


#endif //AET_REQUESTPARSER_H
