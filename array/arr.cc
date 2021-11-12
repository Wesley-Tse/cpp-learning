#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    char a[] = "cpp";
    cout << a[1] << endl;
    int b[5] = {1, 2, 3, 4, 5};
    cout << b[4] << endl;
    cout << b[5] << endl; //c和c++不检查数组越界
    int *e = &b[5];
}