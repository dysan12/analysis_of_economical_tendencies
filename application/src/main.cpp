#include <iostream>
#include "Routing/Router.h"
#include "Library/Functions.h"


int main(int argc, char const *argv[])
{
    std::string request = "/currency_investing_profitability/test/kkk/";
    std::vector<std::string> requestChunks = explode(request, '/');

    Routing::Router router;
    Routing::Route * route = router.resolve(requestChunks[0]);
    AbstractController* controller = route->getController();
    try {
        controller->dispatchAction(requestChunks[1]);
    } catch (Exception &exception) {
        std::cout << exception.getMessage();
    }
}