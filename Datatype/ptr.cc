#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int a = 10;
    const int b = a;
    int *p1 = &a;
    int &r1 = a;
    const int &r2 = a;
    const int &r3 = b;
    const int *p2 = &a;
    const int *p3 = &b;
    const int *const p4 = &a;
    const int *const p5 = &b;
    cout << "a=" << a << ", b=" << b << endl;
    r1++;
    cout << "a=" << a << ", b=" << b << endl;
    (*p1)++;
    cout << "a=" << a << ", b=" << b << endl;
    //r2++; 错误，无法通过r2修改a的值
    //r3++; 错误，无法通过r3修改b的值
    //(*p2)++; 错误，无法通过p2修改a的值
    //(*p3)++; 错误，无法通过p3修改b值
    //(*p4)++; 错误，无法通过p4修改a的值
    //(*p5)++; 错误，无法通过p5修改b的值
    return 0;
}