//
// Created by Michal on 1/21/2018.
//

#ifndef AET_EXCEPTION_H
#define AET_EXCEPTION_H


class Exception {
public:
    explicit Exception(const char* message = "", int errorCode = 0)
    {
        this->message = message;
        this->errorCode = errorCode;
    }

    const char* getMessage()
    {
        return this->message;
    }

    int getErrorCode()
    {
        return this->errorCode;
    }

private:
    const char* message;
    int errorCode;
};


#endif //AET_EXCEPTION_H
