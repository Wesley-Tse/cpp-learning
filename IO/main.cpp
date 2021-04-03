#include <iostream>
/*
    *主函数
    *从键盘读取两个数，求他们的和并打印
*/
int main()
{
    std::cout << "please input two numbers: " << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;
    return 0;
}