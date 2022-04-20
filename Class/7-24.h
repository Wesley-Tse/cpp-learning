#ifndef Exe_7_24
#define Exe_7_24
#include <iostream>
#include <string>

class Screen
{
public:
    typedef std::string::size_type pos;
    Screen() = default;
    Screen(pos ht, pos wd) : height(ht), width(wd), contents(ht * wd, ' ') {}
    Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd, c) {}

    char get() const { return contents[cursor]; }
    char get(pos ht, pos wd) const;
    Screen &move(pos r, pos c); //函数实现代码很少，如两三行可直接在此处定义

private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
};

//显式声明为内联函数

inline Screen &Screen::move(pos r, pos col)
{
    cursor = r * width + col;
    return *this;
}
inline char Screen::get(pos r, pos col) const
{
    pos row = r * width;
    return contents[row + col];
}
#endif