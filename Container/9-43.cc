#include <iostream>
#include <vector>
#include <string>

using namespace std;

void myreplace(string &s, const string oldVal, const string newVal)
{
    auto iter = s.begin();
    while (s.end() - iter >= oldVal.end() - oldVal.begin())
    {
        string _s(iter, iter + oldVal.size());
        if (_s == oldVal)
        {
            iter = s.erase(iter, iter + oldVal.size());
            iter = s.insert(iter, newVal.cbegin(), newVal.cend());
        }
        ++iter;
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