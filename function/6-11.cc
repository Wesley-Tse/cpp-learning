#include <iostream>
using namespace std;

void reset(int &r)
{
    r = 0;
}

int main()
{
    int a = 10;
    reset(a);
    cout << a << endl;
    return 0;
}