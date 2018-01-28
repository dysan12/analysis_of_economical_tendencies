//
// Created by Michal on 28.01.2018.
//

#include "RequestParser.h"

#include "../../Library/Functions.h"
#include "../../Exception/NotSupportedException.h"

RequestParser::RequestParser(std::string requestPath) {
    std::vector<std::string> requestChunks = explode(std::move(requestPath), '/');
    if (requestChunks.size() == 1) {
        this->request = new Request::Request(requestChunks[0]);
    } else if (requestChunks.size() == 2) {
        this->request = new Request::Request(requestChunks[0], requestChunks[1]);
    } else if (requestChunks.size() == 3) {
        this->request = new Request::Request(requestChunks[0], requestChunks[1], std::vector<std::string> (requestChunks.begin() + 2, requestChunks.end()));
    } else {
        throw NotSupportedException("Request path is not compatible with parser");
    }
}

Request::Request* RequestParser::getRequest() {
    return this->request;
}