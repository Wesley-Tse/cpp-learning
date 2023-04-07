#include <iostream>

int main()
{
    int i = 5;
    auto f = [&i]() -> bool
    {if(i==0) return true; else {--i; return false; } };
    while (!f())
        std::cout << i << std::endl;
    return 0;
}
/*output
4
3
2
1
0
*/