#include <iostream>
#include <string>
using namespace std;

struct People
{
    string name;
    int age;
    string sex;
    void speak()
    {
        cout << "My name is " << name
             << ", and I'm " << age << " years old";
    }
};

int main(int argc, char *argv[])
{
    People people1;
    people1.name = "wesley";
    people1.age = 22;
    people1.sex = "male";
    people1.speak();
    return 0;
}