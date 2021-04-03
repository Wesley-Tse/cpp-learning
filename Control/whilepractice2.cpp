#include <iostream>
using namespace std;

int main()
{
    int v1 = 0, v2 = 0;
    cout << "Input two numbers(v1 < v2): " << endl;
    cin >> v1 >> v2;
    while(v1<v2-1){
        v1++;
        cout << v1 << " " << endl;
    }
    return 0;
}