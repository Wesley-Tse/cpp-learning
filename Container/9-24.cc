#include <iostream>
#include <vector>

int main()
{
    std::vector<int> ivec;
    std::cout << ivec.at(0) << std::endl;    // throwing an instance of 'std::out_of_range'
    std::cout << ivec[0] << std::endl;       // Segmentation fault
    std::cout << ivec.front() << std::endl;  // Segmentation fault
    std::cout << *ivec.begin() << std::endl; // Segmentation fault
}