#include <iostream>
#include <regex>
#include <string>
#include <vector>
#include <sstream>
#include <fstream>

using std::cerr;
using std::cout;
using std::endl;
using std::ifstream;
using std::isdigit;
using std::istringstream;
using std::ofstream;
using std::ostringstream;
using std::string;
using std::vector;

class PersonInfo
{
public:
    string name;
    vector<string> phones;
};

vector<PersonInfo> &checkphone(vector<PersonInfo> &people, ifstream &ifs)
{
    string line, word;
    while (getline(ifs, line))
    {
        PersonInfo info;
        std::istringstream record(line);
        record >> info.name;
        while (record >> word)
        {
            info.phones.push_back(word);
        }
        people.push_back(info);
    }
    return people;
}

void printdata(const vector<PersonInfo> &people)
{
    for (auto p : people)
    {
        std::cout << p.name << " ";
        for (auto phonenum : p.phones)
            std::cout << phonenum << " ";
        std::cout << std::endl;
    }
}

int main(int argc, char **argv)
{
    ifstream ifs(argv[1]);
    if (!ifs)
    {
        cerr << "Error, no phone numbers?" << endl;
        return -1;
    }
    vector<PersonInfo> people;

    checkphone(people, ifs);
    printdata(people);
    return 0;
}