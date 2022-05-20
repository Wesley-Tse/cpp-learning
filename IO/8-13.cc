// 从文件中读取电话号码，逐个验证电话号码并改变其格式。如果所有号码都是有效的，我们希望输出一个新的文件，包含改变格式后的号码。
// 对于那些无效的号码，我们不会将它们输出到新文件中，而是打印一条包含人名和无效号码的错误信息。
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
using std::regex;
using std::string;
using std::vector;

class PersonInfo
{
public:
    string name;
    vector<string> phones;
};

bool valid(const string &str)
{
    return isdigit(str[0]);
}

string format(const string &str)
{
    return str.substr(0, 3) + "-" + str.substr(3, 4) + "-" + str.substr(7);
}

void readphone(vector<PersonInfo> &people, ifstream &ifs)
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

void checkphone(const vector<PersonInfo> &people)
{
    for (const auto &entry : people)
    {
        ostringstream formatted, badNums;
        for (const auto &nums : entry.phones)
            if (!valid(nums))
                badNums << " " << nums;
            else
                formatted << " " << format(nums);
        if (badNums.str().empty())
            cout << entry.name << " " << formatted.str() << endl;
        else
            cerr << "input error: " << entry.name << " invalid number(s) "
                 << badNums.str() << endl;
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
    readphone(people, ifs);
    checkphone(people);
    return 0;
}