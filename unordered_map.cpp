#include <iostream>
#include <unordered_map>
#include <variant>
#include <vector>
#include <string>


void print_Map(std::unordered_map<int, std::variant<std::string, int>> *map)
{
    for(const auto &[key, element]:*map)
    {
        std::cout << key << " : ";
        if(std::holds_alternative<int>(element))
            std::cout << std::get<int>(element) << std::endl;
        else if(std::holds_alternative<std::string>(element))
            std::cout << std::get<std::string>(element) << std::endl;
    }
}

int main(){
    std::unordered_map<int, std::variant<std::string, int>> myMap;

    myMap.insert({1, "Hello"});
    myMap.insert({2, 13});
    
    print_Map(&myMap);


    // Reference a key from hashmap
    std::cout << std::get<std::string>(myMap[1]) << std::endl;
    std::cout << std::get<int>(myMap[2]) << std::endl;

    // Remove from dictionary
    myMap.erase(1);

    print_Map(&myMap);

    return 0;
}