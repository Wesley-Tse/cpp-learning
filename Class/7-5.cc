#include <iostream>
#include <string>

class People
{
    std::string name;
    std::string address;

public:
    //用const修饰隐式this指针，因为getname和getaddress只是读people的属性，不会修改它们
    std::string getname() const { return name; }
    std::string getaddress() const { return address; }
};
