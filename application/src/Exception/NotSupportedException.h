//
// Created by Michal on 1/27/2018.
//

#ifndef AET_NOTSUPPORTEDEXCEPTION_H
#define AET_NOTSUPPORTEDEXCEPTION_H


#include "Exception.h"

class NotSupportedException : public Exception {
public:
    explicit NotSupportedException(const char* message = "", int errorCode = 0) : Exception(message, errorCode){}
};


#endif //AET_NOTSUPPORTEDEXCEPTION_H
