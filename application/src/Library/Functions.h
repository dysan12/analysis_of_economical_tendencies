//
// Created by Michal on 1/27/2018.
//

#ifndef LIBFUNCTIONS_H
#define LIBFUNCTIONS_H

#include <vector>
#include <iostream>
#include <iterator>
#include <sstream>

void trim(std::string &text, char delimiter);
std::vector<std::string> explode(std::string text, char delimiter);

void trim(std::string &text, const char delimiter)
{
    if (text.at(text.size() - 1) == delimiter) {
        text.erase(text.end() - 1);
    }

    if (text.at(0) == delimiter) {
        text.erase(text.begin());
    }
}


std::vector<std::string> explode(std::string text, const char delimiter)
{
    trim(text, delimiter);
    std::vector<std::string> elements;
    std::stringstream stream(text);
    std::string item;
    while (getline(stream, item, delimiter))
        elements.push_back(item);

    return elements;
}

#endif //LIBFUNCTIONS_H