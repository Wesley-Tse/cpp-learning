#include <iostream>
#include <vector>

bool Find(std::vector<int>::iterator begin, std::vector<int>::iterator end, const int val)
{
    while (begin != end)
    {
        if (*begin == val)
            return true;
        begin++;
    }
    return false;
};

int main()
{
    std::vector<int> vec = {1, 3, 5, 7, 9};
    std::cout << std::boolalpha << Find(vec.begin(), vec.end(), 2) << std::endl;
    std::cout << std::boolalpha << Find(vec.begin(), vec.end(), 3) << std::endl;
    return 0;
}
