#ifndef SETTINGS_H
#define SETTINGS_H

#include <map>
#include <string>
#include <variant>

class Settings {
    public:
        Settings(const char* path);

        int GetWidth();
        int GetHeight();
        bool IsFullscreen();
        bool IsVSync();
        int GetFPS();
        std::string GetLanguage();

    private:
        std::map<std::string, std::variant<int, bool, std::string>> elements;
};

#endif