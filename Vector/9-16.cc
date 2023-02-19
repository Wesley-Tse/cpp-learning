#include <iostream>
#include <vector>
#include <list>

int main()
{
    // vector<int> 和 list<int>容器类型不同，二者一定不相等，但可以比较其元素是否相等
    std::vector<int> ivec = {1, 2, 3, 4, 5};
    std::list<int> ilist = {1, 3, 5};

    std::vector<int> tmp; // vector<int> 和 list<int> 无法直接做关系运算，必须先统一两者的容器类型
    tmp.assign(ilist.cbegin(), ilist.cend());
    std::cout << std::boolalpha << (tmp == ivec) << std::endl; // ivec和ilist元素不相等，结果为false

    return 0;
}