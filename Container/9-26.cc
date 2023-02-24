#include <iostream>
#include <vector>
#include <list>

int main()
{
    int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
    std::list<int> ilist;
    std::vector<int> ivec;
    auto beg = std::begin(ia); // 内置数组不是类类型，没有成员函数，不能直接用ia.begin()
    auto end = std::end(ia);
    ilist.assign(beg, end);
    ivec.assign(beg, end);

    std::cout << "ia: ";
    for (int i = 0; i <= 10; ++i)
        std::cout << ia[i] << " ";

    std::cout << std::endl
              << "ilsit: ";

    // delete odd numbers of ilsit
    if (!ilist.empty())
    {
        auto iter = ilist.begin();
        while (iter != ilist.end())
        {
            if (*iter % 2)
                iter = ilist.erase(iter);
            else
            {
                std::cout << *iter << " ";
                ++iter;
            }
        }
        std::cout << std::endl
                  << "ivec: ";
    }

    // delete even numbers of ivec
    if (!ivec.empty())
    {
        auto iter = ivec.begin();
        while (iter != ivec.end())
        {
            if (!(*iter % 2))
                iter = ivec.erase(iter);
            else
            {
                std::cout << *iter << " ";
                ++iter;
            }
        }
        std::cout << std::endl;
    }
}