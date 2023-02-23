#include <iostream>
#include <list>
#include <deque>

/*
    ilist -> integer list
    even_d -> enen number deque
    odd_d -> odd number deque
*/
void elemcopy(std::list<int> ilist, std::deque<int> &even_d, std::deque<int> &odd_d)
{
    auto iter = ilist.cbegin();
    while (iter != ilist.cend())
    {
        if (*iter % 2 == 0)
            even_d.push_back(*iter);
        else
            odd_d.push_back(*iter);
        ++iter;
    }
}

void print_deque(std::deque<int> ideque)
{
    auto iter = ideque.cbegin();
    while (iter != ideque.cend())
    {
        std::cout << *iter << " ";
        ++iter;
    }
    std::cout << std::endl;
}

int main()
{
    std::list<int> ilist = {1, 3, 4, 6, 7, 8, 10};
    std::deque<int> even_d, odd_d;

    elemcopy(ilist, even_d, odd_d);

    std::cout << "even_d: ";
    print_deque(even_d);

    std::cout << "odd_d: ";
    print_deque(odd_d);
}