#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

void printSet(std::set<int> *set)
{
    for(const auto &p:*set)
        std::cout << p  << " ";
    std::cout << std::endl;
}


int main()
{
    // Declare a set
    std::set<int> mySet1 = {1, 2, 3, 3, 4};
    // printSet(&mySet1);
    
    std::set<int> mySet2 = {3, 4, 5, 6};
    std::vector<int> result;


    // Get intersection
    std:set_intersection(mySet1.begin(), mySet1.end(), 
                        mySet2.begin(), mySet2.end(), 
                        std::back_inserter(result));

    std::cout << "Intersection results are: " << std::endl;

    for(const auto &p:result)
    {
        std::cout << p << std::endl;
    }
    
    // Remove all elements from result
    result.clear();
    result.shrink_to_fit();     // free the memory

    // Get union
    std::set_union(mySet1.begin(), mySet1.end(),
                        mySet2.begin(), mySet2.end(),
                        std::back_inserter(result));
    std::cout << "Union results are :" << std::endl;
    for(const auto &p:result)
    {
        std::cout << p << std::endl;
    }
    
    return 0;
}