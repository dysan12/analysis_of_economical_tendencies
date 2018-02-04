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
    void dispatchAction(const std::string &actionName, std::string& inputFileName)
    {
        std::map <std::string, std::function<void(std::string inputFileName)>> actionMap = this->getActionsMap();

        auto action = actionMap.find(actionName);
        if(action != actionMap.end()) {
            try {
                this->setUp();
                actionMap[actionName](inputFileName);
            } catch (...) {
                throw; // pass exception further
            }
        } else {
            throw NotSupportedException("Requested action is not supported by controller!");
        }
    }

    virtual std::map<std::string, std::function<void(std::string inputFileName)>> getActionsMap() = 0;

    virtual void setUp(){};
};


#endif //AET_ABSTRACTCONTROLLER_H
