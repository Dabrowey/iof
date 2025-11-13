#ifndef SETTINGS_H
#define SETTINGS_H

#include <map>
#include <string>
#include <variant>

class Settings {
    public:
        Settings(const char* path);

        std::variant<int, bool, std::string> operator [](const char* key);

    private:
        std::map<std::string, std::variant<int, bool, std::string>> elements;
};

#endif