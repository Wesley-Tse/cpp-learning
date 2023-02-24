#include <iostream>
#include <string>
#include <deque>

int main()
{
    std::deque<std::string> sd;
    std::string str;

    while (std::cin >> str)
        sd.push_back(str);

    std::deque<std::string>::const_iterator iter = sd.cbegin();
    while (iter != sd.cend())
    {
        std::cout << *iter << " ";
        ++iter;
    }
    std::cout << std::endl;
}