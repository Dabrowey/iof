#ifndef SETTINGS_H
#define SETTINGS_H

#include <map>
#include <string>
#include <variant>

class Settings {
    Settings(char* path);

    std::variant<int, bool, std::string> operator [](char* element);

    private:
        std::map<std::string, std::variant<int, bool, std::string>> elements;
};

#endif