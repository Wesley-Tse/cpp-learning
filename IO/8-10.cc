#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>

void read(const std::string file_name, std::vector<std::string> &vec)
{
    std::ifstream ifile(file_name);
    if (ifile)
    {
        std::string buf;
        while (std::getline(ifile, buf))
            vec.push_back(buf);
    }
}

int main(int argc, char **argv)
{
    // read line to vec from file
    std::string file_name("8-4.txt");
    std::vector<std::string> vec;
    read(file_name, vec);

    // read line from vec
    for (auto line : vec)
    {
        std::istringstream iss(line);
        std::string word;
        while (iss >> word)
            std::cout << word << " ";
        std::cout << std::endl;
    }
    return 0;
}