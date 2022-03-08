#include <iostream>
#include <string>
using namespace std;

string fun1(unsigned grade)
{
    return (grade > 90) ? "high pass" : (grade > 75) ? "pass"
                                    : (grade >= 60)  ? "low pass"
                                                     : "fail";
}
string fun2(unsigned grade)
{
    string result;
    if (grade > 90)
        return "high pass";
    else if (grade > 75)
        return "pass";
    else if (grade >= 60)
        return "low pass";
    else
        return "fail";
}
int main()
{
    unsigned grade;
    while (cout << "input the grade:" && cin >> grade)
    {
        cout << "fun1:" << fun1(grade) << endl;
        cout << "fun2:" << fun2(grade) << endl;
    }
}