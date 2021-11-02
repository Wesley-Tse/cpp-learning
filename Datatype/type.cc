#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int a = 10;
    auto &r = a;
    // cout << typeid(a).name() << endl; //输出为i，即int
    // cout << typeid(r).name() << endl; //输出为i，即int
    cout << &a << endl;

    auto *p1 = &a;
    cout << p1 << endl;
    cout << &p1 << endl;
    cout << *p1 << endl;

    auto p2 = &a;
    cout << p2 << endl;
    cout << &p2 << endl;
    cout << *p2 << endl;

    return 0;
}