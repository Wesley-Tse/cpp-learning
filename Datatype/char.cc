#include <iostream>
using namespace std;

int main()
{
    char a = 'a';   //1bytes， 字符
    wchar_t b = 'b';    //2bytes，宽字符
    char16_t c = 'c';   //2bytes, unicode字符
    char32_t d = 'd';   //4bytes, unicode字符

    cout << sizeof(a) << endl;
    cout << sizeof(b) << endl;
    cout << sizeof(c) << endl;
    cout << sizeof(d) << endl;

    return 0;
}