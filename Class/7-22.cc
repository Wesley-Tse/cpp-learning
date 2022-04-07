#include <iostream>
#include <string>

class People
{
    friend std::istream &read(std::istream &, People &);
    friend std::ostream &print(std::ostream &, const People &);

public:
    const std::string &getName() const { return name; }
    const std::string &getAddress() const { return address; }

private:
    std::string name;
    std::string address;
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