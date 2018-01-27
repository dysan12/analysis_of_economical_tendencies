//
// Created by Michal on 1/26/2018.
//

#include "Router.h"
#include "../Controller/CurrencyInvestingProfitability/CurrencyInvestingProfitabilityController.h"
#include "../Controller/BadRequestController/BadRequestController.h"

Routing::Router::Router() {
    this->map.push_back(new Route(
            "currency_investing_profitability",
            new CurrencyInvestingProfitabilityController())
    );
}

Routing::Route * Routing::Router::resolve(const std::string &requestedController) {
    Routing::Route *matchedRoute = this->matchRoute(requestedController);

    return matchedRoute;
}

Routing::Route * Routing::Router::matchRoute(const std::string &path) {
    Routing::Route *matchedRoute = nullptr;
    for (Route *route : this->map) {
        if (route->getPath() == path) {
            matchedRoute = route;
            break;
        }
    }

    if (matchedRoute == nullptr) {
        matchedRoute = new Route("bad_request", new BadRequestController());// invalid path
    }

    return matchedRoute;
}
