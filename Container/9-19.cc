#include <iostream>
#include <string>
#include <list>

int main()
{
    std::list<std::string> sl;
    std::string str;

    while (std::cin >> str)
        sl.push_back(str);

    std::list<std::string>::const_iterator iter = sl.cbegin();
    while (iter != sl.cend())
    {
        std::cout << *iter + " ";
        ++iter;
    }
    std::cout << std::endl;
}