#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <variant>

void printArray(std::vector<auto> *myVector) {
    for(const auto &p: *myVector)
    {
        std::cout << p << " ";
    }
    std::cout << std::endl;
}


int main()
{
    
    std::vector<int> myVector  = {10, 33, 2, 6, 9, 3};
    printArray(&myVector);

    // Sort the array in ascending order
    std::sort(myVector.begin(), myVector.end());
    printArray(&myVector);


    std::sort(myVector.begin(), myVector.end(), std::greater<int>());
    printArray(&myVector);
    
    // Sort strings too
    std::vector<std::string> myString = {"Hello", "a", "Bello", "Zulu"};
    printArray(&myString);

    std::sort(myString.begin(), myString.end());
    printArray(&myString);

    return 0;
}