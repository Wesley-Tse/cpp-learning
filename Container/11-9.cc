#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <list>
#include <map>

using std::cout;
using std::endl;
using std::list;
using std::map;
using std::string;

void lineNo(std::ifstream &ifs, map<string, list<int>> &words)
{
    int cnt = 0;
    string line, word;
    while (getline(ifs, line))
    {
        ++cnt;
        std::istringstream _line(line);
        while (_line >> word)
            words[word].push_back(cnt);
    }
}

int main(int argc, char **argv)
{
    map<string, list<int>> words;
    std::ifstream ifs(argv[1]);
    if (!ifs)
    {
        std::cerr << "Cannot open file: " << argv[1] << endl;
        return -1;
    }
    lineNo(ifs, words);
    for (const auto &i : words)
        cout << i.first << " is in line " << *i.second.cbegin() << endl;
    return 0;
}
/*output
agree is in line 1
cookies is in line 3
device is in line 3
of is in line 2
on is in line 3
storing is in line 2
the is in line 2
to is in line 1
you is in line 1
your is in line 3
*/