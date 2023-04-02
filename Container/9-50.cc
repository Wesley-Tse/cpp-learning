#include <iostream>
#include <vector>
#include <string>

int sum(std::vector<std::string> vs)
{
    int sum = 0;
    auto iter = vs.begin();
    while (iter != vs.end())
    {
        sum += std::stoi(*iter);
        ++iter;
    }
    return sum;
}

int main()
{
    std::vector<std::string> vs = {"12", "34", "5", "10"};
    std::cout << "vs: ";
    for (auto i = vs.begin(); i < vs.end(); i++)
        std::cout << *i << " ";
    std::cout << std::endl
              << "sum: " << sum(vs) << std::endl;
    return 0;
}