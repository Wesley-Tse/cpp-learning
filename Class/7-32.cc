#include <iostream>
#include <string>
#include <vector>

class Screen;

class Window_mgr
{
public:
    typedef std::vector<Screen>::size_type ScreenIndex;
    void clear(ScreenIndex);
    void add(Screen &s) { screens.push_back(s); }
    void display(std::ostream &);

private:
    std::vector<Screen> screens;
};

class Screen
{
    friend void Window_mgr::clear(ScreenIndex);
    friend void Window_mgr::display(std::ostream &os);

public:
    typedef std::string::size_type pos;
    Screen() = default;
    Screen(pos ht, pos wd) : height(ht), width(wd), contents(ht * wd, ' ') {}
    Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd, c) {}

    char get() const { return contents[cursor]; }
    char get(pos ht, pos wd) const;
    Screen &move(pos r, pos col); //函数实现代码很少，如两三行可直接在此处定义
    Screen &set(char c);
    Screen &set(pos r, pos col, char c);
    Screen &display(std::ostream &os)
    {
        do_display(os);
        return *this;
    }
    const Screen &display(std::ostream &os) const
    {
        do_display(os);
        return *this;
    }

private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
    void do_display(std::ostream &os) const { os << contents; }
};

//显式声明为内联函数
inline Screen &Screen::move(pos r, pos col)
{
    cursor = r * width + col;
    return *this;
}
inline Screen &Screen::set(char c)
{
    contents[cursor] = c;
    return *this;
}
inline Screen &Screen::set(pos r, pos col, char c)
{
    cursor = r * width + col;
    contents[cursor] = c;
    return *this;
}
inline char Screen::get(pos r, pos col) const
{
    pos row = r * width;
    return contents[row + col];
}

//定义Screen的友元函数Window_mgr::clear
void Window_mgr::clear(ScreenIndex i)
{
    Screen &s = screens[i];
    s.contents = std::string(s.height * s.width, ' ');
}

void Window_mgr::display(std::ostream &os)
{
    for (Screen screen : screens)
    {
        os << screen.contents;
        std::cout << std::endl;
    }
}

int main()
{
    Screen screen1(3, 3, 'a');
    Screen screen2(4, 3, 'b');
    Screen screen3(5, 3, 'c');

    Window_mgr mgr;
    mgr.add(screen1);
    mgr.add(screen2);
    mgr.add(screen3);

    mgr.display(std::cout);
    std::cout << std::endl;
    mgr.clear(1);
    mgr.display(std::cout);
    std::cout << std::endl;
}