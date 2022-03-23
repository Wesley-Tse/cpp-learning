#include <iostream>
#include <vector>

void print(std::vector<int> &vec, std::vector<int>::iterator beg)
{
#ifndef NDEBUG
    std::cout << "vector size: " << vec.size() << std::endl;
#endif
    if (beg < vec.end())
    {
        std::cout << *(beg++) << std::endl;
        print(vec, beg);
    }
}

void print(std::vector<int> &vec)
{
#ifndef NDEBUG
    std::cout << "vector size: " << vec.size() << std::endl;
#endif
    if (!vec.empty())
    {
        std::cout << vec.front() << std::endl;
        vec.erase(vec.begin());
        print(vec);
    }
}

int main()
{
    std::vector<int> vec = {1, 2, 3, 4, 5};
    print(vec, vec.begin());
    print(vec);
}