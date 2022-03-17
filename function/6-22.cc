#include <iostream>

void swap_point(const int *&r1, const int *&r2)
{
    auto tmp = r1;
    r1 = r2;
    r2 = tmp;
}

int main()
{
    const int i = 2, j = 3;
    auto *p1 = &i;
    auto *p2 = &j;

    std::cout << "befor: *p1 = " << *p1 << ", *p2 = " << *p2 << std::endl;
    swap_point(p1, p2);
    std::cout << "after: *p1 = " << *p1 << ", *p2 = " << *p2 << std::endl;
}