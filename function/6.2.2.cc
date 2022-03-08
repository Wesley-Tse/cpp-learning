#include <iostream>
#include <string>
using namespace std;

//找到字符串中某个字首次出现的位置并统计出现次数
string::size_type find_char(const string &s, char c, string::size_type &occurs)
{
    auto position = s.size(); //首次出现位置
    occurs = 0;               //出现次数
    for (decltype(position) i = 0; i != s.size(); ++i)
    {
        if (s[i] == c)
        {
            if (position == s.size())
                position = i;
            ++occurs;
        }
    }
    return position;
}

int main()
{
    string s("change the world!");
    cout << s << endl;
    string::size_type cnt;
    const char c = 'e';
    auto index = find_char(s, c, cnt);
    cout << "Find the first '" << c << "' at index: " << index << endl;
    cout << "Char '" << c << "' appears count: " << cnt << endl;
    return 0;
}