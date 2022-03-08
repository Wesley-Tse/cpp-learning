#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s{};
    char c;
    while (s.size() < 26 && (cin >> c))
    {
        s.push_back(c);
        if (s.size() > 1 && c == *(s.end() - 2))
        {
            cout << "Two consecutive chars: " << c << endl;
            break;
        }
    }
    if (s.size() == 26)
        cout << "There is no char consecutive";

    return 0;
}
