#include <string>

int height;

class Screen
{
public:
    // typedef std::string::size_type pos;
    typedef std::string::size_type pos;
    void dummy_fcn(pos height)
    {
        cursor = width * height;
    }

private:
    pos cursor = 0;
    pos height = 0, width = 0;
    // typedef std::string::size_type pos;
};