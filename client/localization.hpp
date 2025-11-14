#ifndef LOCALIZATION_H
#define LOCALIZATION_H

#include <map>
#include <string>

class Localization {
    public:
        Localization(const char* lang);
        std::string operator[](const char* key);

    private:
        std::map<std::string, std::string> elements;
};

#endif