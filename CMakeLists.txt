cmake_minimum_required(VERSION 3.9)
project(AET)

set(CMAKE_CXX_STANDARD 17)
link_libraries(ws2_32 wsock32)
set(CMAKE_EXE_LINKER_FLAGS "-static")

add_subdirectory(service/utilities/ConnectionManager)
add_subdirectory(service/currency_investing_profitability)

add_executable(
        AET
        application/src/main.cpp
        service/currency_investing_profitability/config/config.h
        config/config.h
        application/src/Routing/Router.cpp
        application/src/Routing/Router.h
        application/src/Routing/Route.h
        application/src/Controller/CurrencyInvestingProfitability/CurrencyInvestingProfitabilityController.cpp
        application/src/Controller/CurrencyInvestingProfitability/CurrencyInvestingProfitabilityController.h
        application/src/Controller/AbstractController.h
        application/src/Controller/BadRequestController/BadRequestController.h
        application/src/Library/Functions.h
        application/src/Exception/NotSupportedException.h
        application/src/Exception/Exception.h
        service/utilities/ConnectionManager/Client/SocketManager.h
        service/utilities/ConnectionManager/Client/SocketManager.cpp
        application/src/Routing/Parser/RequestParser.cpp
        application/src/Routing/Parser/RequestParser.h
        application/src/Routing/Parser/Request.h
        service/utilities/JsonParser/JsonReader.cpp
        service/utilities/JsonParser/JsonReader.h
        service/utilities/JsonParser/JsonWriter.cpp
        service/utilities/JsonParser/JsonWriter.h
)