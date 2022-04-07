#include <iostream>
#include <string>

struct People
{
    std::string name;
    std::string address;

    const std::string &getName() const { return name; }
    const std::string &getAddress() const { return address; }
};

std::istream &read(std::istream &is, People &people)
{
    is >> people.name >> people.address;
    if (!is)
        people = People();
    return is;
}
std::ostream &print(std::ostream &os, const People &people)
{
    os << "Name: " << people.name << " Address: " << people.address;
    return os;
}