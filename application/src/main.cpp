#include <iostream>
#include "Routing/Router.h"
#include "Routing/Parser/RequestParser.h"

int main(int argc, char const *argv[])
{
    std::string requestPath;
    while (
            std::cout << "Request path: " << std::endl &&
            std::getline(std::cin, requestPath)
            ) {
        if (requestPath.size() < 3) {
            std::cout << "Path too short" << std::endl;
            continue;
        }

        try {
            RequestParser requestParser(requestPath);
            Request::Request * request = requestParser.getRequest();

            Routing::Router router;
            Routing::Route * route = router.resolve(request->getControllerName());
            AbstractController* controller = route->getController();

            controller->dispatchAction(request->getAction(), request->getParameters().at(0));
        } catch (Exception &exception) {
            std::cout << exception.getMessage() << std::endl;
        }
    }
}