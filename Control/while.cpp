#include <iostream>
using namespace std;

// 计算1~10相加的和
int main()
{
    int val = 1, sum = 0;
    while(val <= 10){
        sum += val;
        ++val;
    }
    cout << "The sum of 1 to 10 is " << sum << endl;
    return 0;
}