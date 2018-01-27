//
// Created by Michal on 1/26/2018.
//

#ifndef AET_CURRENCYINVESTINGPROFITABILITY_H
#define AET_CURRENCYINVESTINGPROFITABILITY_H


#include "../AbstractController.h"


class CurrencyInvestingProfitabilityController : public AbstractController {
public:
    std::map<std::string, std::function<void()>> getActionsMap() override {
        using namespace std::string_literals;
        std::map<std::string, std::function<void()>> actionsMap = {
                {"test", std::bind(&test, this)}};
        return actionsMap;
    };
    void test()
    {
        std::cout << "works";
    }

};

#endif //AET_CURRENCYINVESTINGPROFITABILITY_H
