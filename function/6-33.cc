#include <iostream>
#include <vector>

void print_vector(const std::vector<int> vec, unsigned n)
{
    if (n < vec.size())
    {
        std::cout << vec[n] << std::endl;
        print_vector(vec, n + 1);
    }
}
void print_vector(std::vector<int>::iterator beg, std::vector<int>::iterator end)
{
    if (beg != end)
    {
        std::cout << *beg << std::endl;
        print_vector(std::next(beg), end);
    }
}

int main()
{
    std::vector<int> vec = {1, 2, 3, 4, 5};
    std::cout << "index:" << std::endl;
    print_vector(vec, 0);
    std::cout << "iterator:" << std::endl;
    print_vector(vec.begin(), vec.end());
}