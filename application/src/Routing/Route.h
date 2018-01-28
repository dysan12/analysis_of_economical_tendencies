//
// Created by Michal on 1/26/2018.
//

#ifndef AET_ROUTE_H
#define AET_ROUTE_H

#include <iostream>
#include "../Controller/AbstractController.h"

namespace Routing
{
    class Route {
    public:
        Route(std::string path, AbstractController *controller)
        {
            this->path = path;
            this->controller = controller;
        }
        std::string getPath()
        {
            return this->path;
        }
        AbstractController* getController()
        {
            return this->controller;
        }
    private:
        std::string path;
        AbstractController *controller;

    };
}




#endif //AET_ROUTE_H
