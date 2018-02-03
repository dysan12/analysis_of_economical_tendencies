//
// Created by Michal on 1/26/2018.
//

#ifndef AET_CURRENCYINVESTINGPROFITABILITY_H
#define AET_CURRENCYINVESTINGPROFITABILITY_H

#include <iostream>
#include "../AbstractController.h"
#include "../../../../service/utilities/ConnectionManager/Client/SocketManager.h"

class CurrencyInvestingProfitabilityController : public AbstractController {
public:
    CurrencyInvestingProfitabilityController();

    std::map<std::string, std::function<void()>> getActionsMap() override {
        using namespace std::string_literals;
        std::map<std::string, std::function<void()>> actionsMap = {
                {"calculate", std::bind(&calculateInvestingProfitability, this)}};
        return actionsMap;
    };

    void calculateInvestingProfitability();
    void setUp() override;
private:
    Client::SocketManager *socketManager;
};

#endif //AET_CURRENCYINVESTINGPROFITABILITY_H
