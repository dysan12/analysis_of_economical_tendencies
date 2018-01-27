//
// Created by Michal on 1/26/2018.
//

#ifndef AET_BADREQUESTCONTROLLER_H
#define AET_BADREQUESTCONTROLLER_H


#include "../AbstractController.h"

class BadRequestController : public AbstractController{
    std::map <std::string, std::function<void()>> getActionsMap(){
        std::map <std::string, std::function<void()>> map;
        return map;
    };
};


#endif //AET_BADREQUESTCONTROLLER_H
