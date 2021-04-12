#include <iostream>
using namespace std;

//读入未知个数的正整数，并计算他们的和
int main()
{
    int sum = 0, val = 0;
    cout << "Enter numbers: " << endl;
    while(cin >> val) //一直接受键盘输入，直到输入非整数时条件为假，循环结束
        sum += val;
    cout << "Sum is " << sum <<endl;
    return 0;
}