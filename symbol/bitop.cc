#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int b = a >> 2;
    cout << b << endl;
    ++a = 3;
    cout << a << endl;
    int c[4] = {1, 2, 3, 4};
    int *p = c;
    cout << *++p;
}