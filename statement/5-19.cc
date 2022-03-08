#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1, s2;
    do
    {
        cout << "Please input two strings: " << endl;
        if (cin >> s1 >> s2)
        {
            if (s1.size() < s2.size())
                cout << "The short string is: " << s1 << endl;
            else if (s1.size() > s2.size())
                cout << "The short string is: " << s2 << endl;
            else
                cout << "The two strings are equal in size" << endl;
        }

    } while (cin);
}