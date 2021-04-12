#include <iostream>
using namespace std;

int main()
{
    short a = 1;    //2bytes
    int b = 1;      //4bytes
    long c = 1;     //4bytes
    long long d = 1;   //8bytes 
    float e = 0.1;      //4bytes
    double f = 0.1;     //8bytes
    long double g = 0.1;    //16bytes
    cout << sizeof(a) <<endl;
    cout << sizeof(b) <<endl;
    cout << sizeof(b) <<endl;
    cout << sizeof(d) <<endl;
    cout << sizeof(e) <<endl;
    cout << sizeof(f) <<endl;
    cout << sizeof(g) <<endl;


    return 0;
}