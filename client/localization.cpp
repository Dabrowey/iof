#include "localization.hpp"
#include "json.hpp"
#include <fstream>
#include <string>

using json = nlohmann::json;

Localization::Localization(const char* lang) : elements {
        {"#NewGame", ""},
        {"#LoadGame", ""},
    }
{
    std::ifstream localefile(std::string("localization/") + std::string(lang) + std::string(".json"));
    json data = json::parse(localefile);
    localefile.close();
    for (auto& [key, value] : elements)
    {
        if (data.contains(key))
        {
            value = data[key].get<std::string>();
        }
    }
}


std::string Localization::operator[](const char* key)
{
    return elements[key];
}