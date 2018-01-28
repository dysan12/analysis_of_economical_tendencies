//
// Created by Michal on 1/26/2018.
//

#ifndef AET_ROUTING_H
#define AET_ROUTING_H

#include <vector>
#include "Route.h"

namespace Routing
{
    class Router {
    public:
        Router();

        Route * resolve(const std::string &requestedController);


    private:
        std::vector<Route *> map;
        Route * matchRoute(const std::string &path);
    };
}




#endif //AET_ROUTING_H
