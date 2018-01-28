//
// Created by Michal on 1/26/2018.
//

#ifndef AET_ABSTRACTCONTROLLER_H
#define AET_ABSTRACTCONTROLLER_H

#include <map>
#include <iostream>
#include <functional>
#include "../Exception/NotSupportedException.h"

class AbstractController {
public:
    void dispatchAction(const std::string &actionName)
    {
        std::map <std::string, std::function<void()>> actionMap = this->getActionsMap();

        auto action = actionMap.find(actionName);
        if(action != actionMap.end()) {
            try {
                this->setUp();
                actionMap[actionName]();
            } catch (...) {
                throw; // pass exception further
            }
        } else {
            throw NotSupportedException("Requested action is not supported by controller!");
        }
    }

    virtual std::map<std::string, std::function<void()>> getActionsMap() = 0;

    virtual void setUp(){};
};


#endif //AET_ABSTRACTCONTROLLER_H
