#include <iostream>
#include <vector>

int fun(int a, int b);

// 6-54:编写函数的声明，令其接受两个int形参并且返回类型也是int;然后声明一个vector对象，令其元素是指向该函数的指针。
typedef decltype(fun) *pf1;
using pf2 = decltype(fun) *;
typedef decltype(fun) pf3;
using pf4 = int (*)(int a, int b);
using pf5 = int(int a, int b);
typedef int (*pf6)(int a, int b);

std::vector<pf1> vec1;
std::vector<pf2> vec2;
std::vector<pf3 *> vec3;
std::vector<pf4> vec4;
std::vector<pf5 *> vec5;
std::vector<pf6> vec6;

// 6-55:编写4个函数，分别对两个int值执行加、减、乘、除运算；在上一题创建的vector对象中保存指向这些函数的指针。
int mysum(int a, int b) { return a + b; }
int mysub(int a, int b) { return a - b; }
int mymul(int a, int b) { return a * b; }
int mydiv(int a, int b)
{
    if (b == 0)
    {
        std::cerr << "Error: Divisor is zero!" << std::endl;
        return 0;
    }
    return a / b;
}
int main()
{
    std::vector<pf1> pfvec{mysum, mysub, mymul, mydiv};

    // 6-56:调用上述vector对象中的每个元素并输出其结果。
    for (auto elem : pfvec)
    {
        std::cout << elem(10, 2) << std::endl;
    }
}