//
// Created by Michal on 1/26/2018.
//

#include "CurrencyInvestingProfitabilityController.h"
#include "../../../../config/config.h"
#include <fstream>
#include <sstream>

CurrencyInvestingProfitabilityController::CurrencyInvestingProfitabilityController() {

}

void CurrencyInvestingProfitabilityController::calculateInvestingProfitability(std::string fileName)
{
    std::ifstream file;
    file.open(fileName);
    std::string input;
    getline(file, input);
    this->socketManager->sendData(input.c_str());

    std::cout << this->socketManager->receiveData() << std::endl;
}

void CurrencyInvestingProfitabilityController::setUp(){
    this->socketManager = new Client::SocketManager();
    this->socketManager->prepareConnection();

    this->socketManager->connectToServer(
            CurrencyInvestingProfitability::serverAddress.port,
            CurrencyInvestingProfitability::serverAddress.address
    );
};