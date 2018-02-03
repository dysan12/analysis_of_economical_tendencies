//
// Created by Michal on 1/26/2018.
//

#include "CurrencyInvestingProfitabilityController.h"
#include "../../../../config/config.h"

CurrencyInvestingProfitabilityController::CurrencyInvestingProfitabilityController() {

}

void CurrencyInvestingProfitabilityController::calculateInvestingProfitability()
{
    this->socketManager->sendData(
            R"({"module": "calculateInvestingProfitability","firstCurrency": [1.23, 2.45, 4.32],"secondCurrency": [2.23, 3.45, 1.32]})"
    );
    std::string ret = this->socketManager->receiveData();
}

void CurrencyInvestingProfitabilityController::setUp(){
    this->socketManager = new Client::SocketManager();
    this->socketManager->prepareConnection();

    this->socketManager->connectToServer(
            CurrencyInvestingProfitability::serverAddress.port,
            CurrencyInvestingProfitability::serverAddress.address
    );
};