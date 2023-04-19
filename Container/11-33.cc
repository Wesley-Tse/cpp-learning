#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <map>

using std::cout;
using std::endl;
using std::map;
using std::string;

map<string, string> buildMap(std::ifstream &map_file)
{
    map<string, string> trans_map;
    string key;
    string value;
    while (map_file >> key && std::getline(map_file, value))
    {
        if (value.size() > 1)
            trans_map[key] = value.substr(1);
        else
            throw std::runtime_error("No rule for " + key);
    }
    return trans_map;
}
const string &transform(const string &str, const map<string, string> &trans_map)
{
    auto rule = trans_map.find(str);
    if (rule != trans_map.cend())
        return rule->second;
    else
        return str;
}
void word_transform(std::ifstream &map_file, std::ifstream &input)
{
    auto trans_map = buildMap(map_file);
    string text;
    while (getline(input, text))
    {
        std::istringstream stream(text);
        string word;
        bool firstword = true;
        while (stream >> word)
        {
            if (firstword)
                firstword = false;
            else
                cout << " ";
            cout << transform(word, trans_map);
        }
        cout << endl;
    }
}

int main(int argc, char **argv)
{
    map<string, string> words;
    std::ifstream map_file(argv[1]);
    std::ifstream input(argv[2]);
    if (!map_file)
    {
        std::cerr << "Cannot open file: " << argv[1] << endl;
        return -1;
    }
    if (!input)
    {
        std::cerr << "Cannot open file: " << argv[2] << endl;
        return -1;
    }
    word_transform(map_file, input);
    return 0;
}
/*output
where are you
why dont you send me a picture
okay? thanks! later
*/