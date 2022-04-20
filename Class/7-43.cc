#include <iostream>
#include <vector>

class NoDefault
{
public:
    NoDefault(int){};
};

class C
{
public:
    C() : c(0) { std::cout << "C.default" << std::endl; }

private:
    NoDefault c;
};

int main()
{
    C c1;
    // 7-44
    // std::vector<NoDefault> vec1(10); // illegal, NoDefault has no default constructor
    // 7-45
    std::vector<C> vec2(10); // legal, C has default constructor
}