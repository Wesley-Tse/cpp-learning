#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 1, b = 2;
    cout << "befor: a=" << a << ", b=" << b << endl;
    swap(a, b);
    cout << "after: a=" << a << ", b=" << b << endl;
    return 0;
}