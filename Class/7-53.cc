#include <iostream>

class Debug
{
public:
    constexpr Debug(bool b = true) : io(b), hw(b), other(b) {}
    constexpr Debug(bool i, bool h, bool o) : io(i), hw(h), other(o) {}
    constexpr bool any() { return io || hw || other; }
    void set_io(bool b) { io = b; }
    void set_hw(bool b) { hw = b; }
    void set_other(bool b) { other = b; }

private:
    bool io;
    bool hw;
    bool other;
};
