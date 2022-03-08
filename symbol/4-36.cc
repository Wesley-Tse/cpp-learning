#include <iostream>

using namespace std;

int main()
{
    int i = 3;
    double d = 4.5;
    //i *= d; //i = int(3*4.5)=13
    //i *= int(d); //i = 3*4=12
    //i *= (int)d; //i = 3*4=12
    i *= static_cast<int>(d); //i = 3*4=12
    cout << i << endl;
}