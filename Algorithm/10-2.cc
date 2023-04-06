#include <iostream>
#include <list>
#include <string>
#include <algorithm>

int main()
{
    std::list<std::string> slist;
    std::string str;
    std::string target = "is";
    std::cout << "Input string: " << std::endl;
    while (std::cin >> str)
        slist.push_back(str);
    auto cnt = std::count(slist.begin(), slist.end(), target);
    std::cout << target << " appears " << cnt << " times in this vector." << std::endl;
    return 0;
}