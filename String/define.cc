#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    string s1 = "123";
    string s2 = s1;
    string s3(s1);
    string s4("asdfg");  //直接初始化
    string s5 = "asdfg"; //拷贝初始化
    string s6(10, 'a');  //s2是10个连续的字符a
    s2.append("hjkl");
    cout << s2 << endl;
    string s7;
    cin >> s7;
    cout << s7;
}