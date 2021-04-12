#include <iostream>
using namespace std;

// 计算从1加到10
int main()
{
    int sum = 0;
    for(int i = 1;i <= 10;i++){
        sum += i;
    }
    cout << "The sum of 1 to 10 is " << sum << endl;
    return 0;
}