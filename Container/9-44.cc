#include <iostream>
#include <vector>
#include <string>

using namespace std;

void myreplace(string &s, const string oldVal, const string newVal)
{
    int pos = 0;
    while (pos + oldVal.size() <= s.size())
    {
        if (s.substr(pos, oldVal.size()) == oldVal)
        {
            s.erase(pos, oldVal.size());
            s.insert(pos, newVal);
            // s.replace(pos, oldVal.size(), newVal);
            pos += newVal.size();
        }
        ++pos;
    }
}

int main()
{
    string s("tho hello tho bob");
    cout << s << endl;
    myreplace(s, "tho", "though");
    cout << s << endl;
    return 0;
}