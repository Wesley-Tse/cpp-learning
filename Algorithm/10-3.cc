#include <iostream>
#include <vector>
#include <numeric>

int main()
{
    std::vector<int> ivec{1, 2, 4, 5};
    std::cout << "vector<int>:";
    for (auto i = ivec.cbegin(); i != ivec.cend(); i++)
        std::cout << *i << " ";
    std::cout << std::endl;
    auto sum = std::accumulate(ivec.cbegin(), ivec.cend(), 0);
    std::cout << "sum = " << sum << std::endl;
    return 0;
}