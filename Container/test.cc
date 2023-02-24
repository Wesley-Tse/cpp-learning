#include <iostream>
#include <vector>
#include <string>

void print_vector(std::vector<int> ivec)
{
    auto iter = ivec.cbegin();
    while (iter != ivec.cend())
    {
        std::cout << *iter << " ";
        ++iter;
    }
    std::cout << std::endl;
}

void add_elem(std::vector<int> &ivec)
{
    while (ivec.size() < 10)
        ivec.push_back(1);
}

int main()
{
    std::vector<int> ivec = {1, 2, 3, 4, 5};
    std::cout << "ivec: ";
    print_vector(ivec);
}