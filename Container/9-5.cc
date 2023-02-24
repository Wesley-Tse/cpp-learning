#include <iostream>
#include <vector>

std::vector<int>::iterator find(std::vector<int>::iterator begin, std::vector<int>::iterator end, const int val)
{
    while (begin != end)
    {
        if (*begin == val)
            return begin;
        begin++;
    }
    return end;
}

int main()
{
    std::vector<int> vec = {1, 3, 5, 7, 9};
    int index = find(vec.begin(), vec.end(), 3) - vec.begin();
    if (index != 0)
        std::cout << "Found it at the " << index << "th element" << std::endl;
    else
        std::cout << "Not found!" << std::endl;
    return 0;
}