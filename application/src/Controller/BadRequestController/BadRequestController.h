//
// Created by Michal on 1/26/2018.
//

#ifndef AET_BADREQUESTCONTROLLER_H
#define AET_BADREQUESTCONTROLLER_H



class BadRequestController : public AbstractController{
    std::map <std::string, std::function<void(std::string inputFileName)>> getActionsMap(){
        std::map <std::string, std::function<void(std::string inputFileName)>> map;
        return map;
    };
};


#endif //AET_BADREQUESTCONTROLLER_H
