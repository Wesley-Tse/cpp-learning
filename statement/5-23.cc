#include <iostream>

using namespace std;

int division(int a, int b)
{
    if (b == 0)
    {
        throw "Division by zero condition!";
    }
    return (a / b);
}

int main()
{
    int a, b, result;
    cout << "Input two integers: " << endl;
    cin >> a >> b;
    try
    {
        result = division(a, b);
        cout << a << " / " << b << " = " << result;
    }
    catch (const char *e)
    {
        cerr << e << endl;
    }
    return 0;
}