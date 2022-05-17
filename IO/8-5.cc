#include <iostream>
#include <fstream>
#include <string>
#include <vector>

void read(const std::string file_name, std::vector<std::string> &vec)
{
    std::ifstream ifile(file_name);
    if (ifile)
    {
        std::string buf;
        while (ifile >> buf)
            vec.push_back(buf);
    }
    else
    {
        std::cerr << "Error, can't open file: " << file_name << std::endl;
        return;
    }
}

int main()
{
    std::vector<std::string> vec;
    std::string file_name = "8-4.txt";
    read(file_name, vec);
    for (const auto &str : vec)
        std::cout << str << std::endl;
}