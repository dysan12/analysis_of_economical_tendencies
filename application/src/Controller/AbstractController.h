//
// Created by Michal on 1/26/2018.
//

#ifndef AET_ABSTRACTCONTROLLER_H
#define AET_ABSTRACTCONTROLLER_H

#include <iostream>
#include <map>
#include <functional>
#include "../Exception/NotSupportedException.h"

class AbstractController;

class AbstractController {
public:
    void dispatchAction(const std::string &actionName)
    {
        std::map <std::string, std::function<void()>> actionMap = this->getActionsMap();

        auto action = actionMap.find(actionName);
        if(action != actionMap.end()) {
            actionMap[actionName]();
        } else {
            throw NotSupportedException("Requested action is not supported by controller!");
        }
    }

    virtual std::map<std::string, std::function<void()>> getActionsMap() = 0;
};


#endif //AET_ABSTRACTCONTROLLER_H
