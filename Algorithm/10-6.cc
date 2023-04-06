#include <iostream>
#include <vector>

int main()
{
    std::vector<int> ivec{1, 2, 0, 4, 0, 5};
    std::cout << "Befor: ";
    for (auto i = ivec.cbegin(); i != ivec.cend(); i++)
        std::cout << *i << " ";
    std::cout << std::endl;
    std::fill_n(ivec.begin(), ivec.size(), 0);
    std::cout << "After: ";
    for (auto i = ivec.cbegin(); i != ivec.cend(); i++)
        std::cout << *i << " ";
    std::cout << std::endl;
    return 0;
}