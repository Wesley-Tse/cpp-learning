#include <iostream>

using namespace std;

int main()
{
    unsigned cnt = 0;
    char ch;
    while (cin >> ch)
    {
        switch (ch)
        {
        case 'a':
            ++cnt;
        case 'e':
            ++cnt;
        default:;
        }
    }
}
