#include <iostream>

int main()
{
    int a = 1;
    auto sum = [a](int b)
    { return a + b; };

    std::cout << sum(2) << std::endl;
}
/*output
3
*/