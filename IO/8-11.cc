#include <iostream>
#include <string>
#include <vector>
#include <sstream>

class PersonInfo
{
public:
    std::string name;
    std::vector<std::string> phones;
};

int main()
{
    // exam code of section 8.3.1
    // std::string line, word;
    // std::vector<PersonInfo> people;
    // while (getline(std::cin, line))
    // {
    //     PersonInfo info;
    //     std::istringstream record(line);
    //     record >> info.name;
    //     while(record >> word)
    //         info.phones.push_back(word);
    //     people.push_back(info);
    // }

    // exercise 8.11
    std::string line, word;
    std::vector<PersonInfo> people;

    std::istringstream record;
    while (getline(std::cin, line))
    {
        PersonInfo info;
        record.clear();
        record.str(line);
        record >> info.name;
        while (record >> word)
            info.phones.push_back(word);
        people.push_back(info);
    }
    // print
    for (auto p : people)
    {
        std::cout << p.name << " ";
        for (auto i : p.phones)
            std::cout << i << " ";
        std::cout << std::endl;
    }
}