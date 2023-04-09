#include <iostream>
#include <list>

void lprint(std::list<int> &lst)
{
    for (auto &i : lst)
        std::cout << i << " ";
    std::cout << std::endl;
}

int main()
{
    std::list<int> lst{1, 2, 2, 3, 4, 4, 5, 6, 6, 7, 8, 9, 9};
    std::cout << "list: ";
    lprint(lst);
    lst.unique();
    std::cout << "After: ";
    lprint(lst);
    return 0;
}
/*output
list: 1 2 2 3 4 4 5 6 6 7 8 9 9
After: 1 2 3 4 5 6 7 8 9
*/