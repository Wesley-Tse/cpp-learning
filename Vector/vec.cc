#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string s1;
    vector<string> svec;
    while (cin >> s1)
    {
        svec.push_back(s1);
    }
    for (auto s : svec)
    {
        cout << s + " ";
    }
}