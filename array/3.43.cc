#include <iostream>

using namespace std;

int main()
{
    //遍历ia中的元素
    int ia[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    //范围for循环
    for (int(&i)[4] : ia)
        for (int &j : i)
        {
            cout << j << " ";
        }
    cout << endl;
    //普通 for循环+下标
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 4; j++)
        {
            cout << ia[i][j] << " ";
        }
    cout << endl;
    //普通for循环+指针
    for (int(*p)[4] = ia; p != ia + 3; p++)
        for (int *q = *p; q != *p + 4; q++)
        {
            cout << *q << " ";
        }
    cout << endl;
}