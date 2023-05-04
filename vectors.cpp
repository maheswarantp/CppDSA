#include <iostream>
#include <vector>
#include <variant>
#include <string>


int main()
{
    std::cout << "++++++++ Vectors in C++ ++++++++" << std::endl;
    // Heres how to initialise a vector

    std::vector<int> myVector = {1, 2, 3, 4, 5};

    // vectors are dynamic arrays, u can append and remove from them

    myVector.push_back(15);     // append operation
    myVector.pop_back();        // remove function with no returns

    // How to declare an array with different datatypes? Use variant
    std::vector<std::variant<int, double, std::string>> dynamicArray = {1, "Hello", 4};

    dynamicArray.push_back("MyMan");

    // Insert at some point x = 2
    dynamicArray.insert(dynamicArray.begin()+2, "BAD");

    // Erase at some point x = 3
    dynamicArray.erase(dynamicArray.begin() + 3);


    // Iterate over dynamic array
    for(const auto &p: dynamicArray)
    {
        if(std::holds_alternative<int>(p))
            std::cout << std::get<int>(p) << std::endl;
        else if(std::holds_alternative<std::string>(p))
            std::cout << std::get<std::string>(p) << std::endl;
    }


    // // Iterate over the vector
    // for(const auto &element: myVector){
    //     std::cout << element << std::endl;
    // }


    return 0;
}