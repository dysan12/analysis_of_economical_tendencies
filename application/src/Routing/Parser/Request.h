//
// Created by Michal on 28.01.2018.
//

#ifndef AET_REQUEST_H
#define AET_REQUEST_H

#include <iostream>
#include <vector>

namespace Request {
    class Request {
    public:
        Request(std::string controllerName, std::string action, std::vector<std::string> parameters)
        { this->controllerName = controllerName; this->action = action; this->parameters = parameters; }
        Request(std::string controllerName) { this->controllerName = controllerName;};
        Request(std::string controllerName, std::string action) {this->controllerName = controllerName; this->action = action;};

        std::string getControllerName(){ return this->controllerName;};
        std::string getAction() { return this->action;};
        std::vector<std::string> getParameters() { return this->parameters;};
        bool hasControllerName() {return !this->controllerName.empty();};
        bool hasAction() {return !this->action.empty();};
        bool hasParameters() { return !this->parameters.empty();};
    private:
        std::string controllerName;
        std::string action;
        std::vector<std::string> parameters;
    };
}



#endif //AET_REQUEST_H
