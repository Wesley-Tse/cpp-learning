#include <iostream>
#include <list>
#include <forward_list>

void func_list(std::list<int> &ilist)
{
    auto iter = ilist.begin();
    while (iter != ilist.end())
    {
        if (*iter % 2)
        {
            iter = ilist.insert(iter, *iter);
            ++iter;
            ++iter;
        }
        else
            iter = ilist.erase(iter);
    }
    auto begin = ilist.begin();
    while (begin != ilist.end())
    {
        std::cout << *begin << " ";
        ++begin;
    }
    std::cout << std::endl;
}

void func_forward_list(std::forward_list<int> &iflist)
{
    auto iter = iflist.begin();
    auto prev = iflist.before_begin();
    while (iter != iflist.end())
    {
        if (*iter % 2)
        {
            iter = iflist.insert_after(iter, *iter);
            prev = iter;
            ++iter;
        }
        else
            iter = iflist.erase_after(prev);
    }
    auto begin = iflist.begin();
    while (begin != iflist.end())
    {
        std::cout << *begin << " ";
        ++begin;
    }
    std::cout << std::endl;
}

int main()
{
    std::list<int> ilist{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::forward_list<int> iflist{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    func_list(ilist);
    func_forward_list(iflist);
    return 0;
}