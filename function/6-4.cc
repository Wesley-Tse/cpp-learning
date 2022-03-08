#include <iostream>
using namespace std;

int fact(int a)
{
    if (a == 1)
        return 1;
    int ret = 1;
    while (a > 1)
        ret *= a--;
    return ret;
}

int main()
{
    int a;
    do
    {
        cout << "input a integer: ";
        cin >> a;
        cout << a << "! = " << fact(a) << endl;
    } while (cin);
    return 0;
}