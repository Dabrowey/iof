#include "settings.hpp"
#include "json.hpp"
#include <fstream>
#include <variant>

using json = nlohmann::json;

Settings::Settings(char* path) : elements{
            {"width", 1280},
            {"height", 720},
            {"fullscreen", false},
            {"language", "english"},
            {"vsync", false},
            {"fps", 120}
        }
{
    std::ifstream settingsfile(path);
    json data = json::parse(settingsfile);
    settingsfile.close();
    for (auto& [key, value] : elements)
    {
        if (data.contains(key))
        {
            if (std::holds_alternative<int>(value)) 
            {
                value = data[key].get<int>();
            } 
            else if (std::holds_alternative<bool>(value)) 
            {
                value = data[key].get<bool>();
            } 
            else if (std::holds_alternative<std::string>(value)) 
            {
                value = data[key].get<std::string>();
            } 
        }
    }
}

std::variant<int, bool, std::string> Settings::operator [](char* key) 
{
    return elements[key];
}