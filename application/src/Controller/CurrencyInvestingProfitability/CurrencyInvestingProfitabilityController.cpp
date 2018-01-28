//
// Created by Michal on 1/26/2018.
//

#include "CurrencyInvestingProfitabilityController.h"
#include "../../../../config/config.h"

CurrencyInvestingProfitabilityController::CurrencyInvestingProfitabilityController() {

}

void CurrencyInvestingProfitabilityController::getStatus()
{
    std::cout << this->socketManager->receiveData();
}

void CurrencyInvestingProfitabilityController::setUp(){
    this->socketManager = new Client::SocketManager();
    this->socketManager->prepareConnection();

    this->socketManager->connectToServer(
            CurrencyInvestingProfitability::serverAddress.port,
            CurrencyInvestingProfitability::serverAddress.address
    );
};