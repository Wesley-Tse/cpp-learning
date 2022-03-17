#include <iostream>
#include "test.h"
using namespace std;

int main()
{
    int a = 1, b = 2;
    cout << "befor: a=" << a << ", b=" << b << endl;
    swap(a, b);
    cout << "after: a=" << a << ", b=" << b << endl;
    return 0;
}