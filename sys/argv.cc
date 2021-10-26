#include <iostream>
using namespace std;

/*
argc是int型变量，是参数的数量
argv是指针数组，里面存放的是参数，第一个元素是程序自身
*/
int main(int argc, char *argv[])
{
    cout << argc << endl;
    for (int i = 0; i < argc; i++)
    {
        cout << argv[i] << endl;
    }
    return 0;
}