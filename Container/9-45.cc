#include <iostream>
#include <string>

std::string add_fix(const std::string &name, const std::string &prefix, const std::string &suffix)
{
    auto ret = name;
    ret.insert(0, prefix);
    ret.append(suffix);
    return ret;
}

int main()
{
    std::string name("jacky");
    std::cout << add_fix(name, "Mr.", ", Jr.") << std::endl;
    return 0;
}