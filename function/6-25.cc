#include <iostream>
#include <string>

int main(int argc, char **argv)
{
    std::string str;
    str = std::string(argv[1]);
    str.append(std::string(argv[2]));
    std::cout << "str is: " << str << std::endl;
}