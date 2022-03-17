#include <iostream>
#include <initializer_list>
#include <typeinfo>

int fun(std::initializer_list<int> il)
{
    int sum = 0;
    for (const auto e : il)
        sum += e;
    return sum;
}

int main()
{
    std::initializer_list<int> il = {1, 2, 3, 4, 5};
    std::cout << "The sum of all elements in il is: " << fun(il) << std::endl;
}