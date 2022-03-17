#include <iostream>
#include <string>
using namespace std;

bool has_upper(const string &s)
{
    for (auto c : s)
        if (isupper(c))
            return true;
    return false;
}

const string &to_lower(string &s)
{
    for (auto &c : s)
        if (isupper(c))
            c = tolower(c);
    return s;
}

int main()
{
    string s = "Hello World!";
    cout << "String: " << s << endl;
    cout << boolalpha;
    cout << "Has upper: " << has_upper(s) << endl;
    cout << "Change upper to lower: " << to_lower(s) << endl;
}