#include <string>
using std::string;

typedef string Type;
Type initVal(); // Type use `string`
class Exercise
{
public:
    typedef double Type;
    Type setVal(Type); // Type use `double`
    Type initVal();    // Type use `double`
private:
    int val;
};

// error: type of return don't match
Type Exercise::setVal(Type parm) // first is `string`, second is `double`
{
    val = parm + initVal(); // Exercise::initVal()
    return val;
}

// fixed
Exercise::Type Exercise::setVal(Type parm)
{
    val = parm + initVal();
    return val;
}