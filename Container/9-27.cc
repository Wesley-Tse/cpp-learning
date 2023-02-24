#include <iostream>
#include <forward_list>

/*
    delete odd numbers of forward_list
*/
void del_odd(std::forward_list<int> &flist)
{
    if (!flist.empty())
    {
        auto prev = flist.before_begin();
        auto iter = flist.begin();
        while (iter != flist.end())
        {
            if (*iter % 2)
                iter = flist.erase_after(prev);
            else
            {
                prev = iter;
                ++iter;
            }
        }
    }
}

void print_flist(std::forward_list<int> flist)
{
    auto iter = flist.cbegin();
    while (iter != flist.cend())
    {
        std::cout << *iter << " ";
        ++iter;
    }
    std::cout << std::endl;
}

int main()
{
    std::forward_list<int> flist = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::cout << "flist: ";
    print_flist(flist);
    del_odd(flist);
    std::cout << "after deleted: ";
    print_flist(flist);
}