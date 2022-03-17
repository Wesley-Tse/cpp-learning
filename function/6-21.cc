#include <iostream>

int compare(const int i, const int *const ip)
{
    return (i > *ip) ? i : *ip;
}

int main()
{
    int i = 10, j = 12;
    std::cout << "i = " << i << ", j = " << j << std::endl;
    std::cout << "bigger: " << compare(i, &j);
}