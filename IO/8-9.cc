#include <iostream>
#include <sstream>
#include <string>

std::istream &read(std::istream &is)
{
    std::string buf;
    while (is >> buf)
        std::cout << "buf: " << buf << std::endl;
    is.clear();
    return is;
}

int main()
{
    std::istringstream iss("using istringstream");
    std::istream &is = read(iss);
    std::cout << is.rdstate() << std::endl;
}
