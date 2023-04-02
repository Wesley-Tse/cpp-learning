#include <iostream>
#include <string>
#include <unistd.h>

/*using find_first_of*/
void find_num_char1(const std::string &str, const std::string &str_obj)
{
    std::string::size_type pos = 0;
    while ((pos = str.find_first_of(str_obj, pos)) != std::string::npos)
    {
        std::cout << str[pos] << " ";
        ++pos;
    }
    std::cout << std::endl;
}

/*using find_first_not_of*/
void find_num_char2(const std::string &str, const std::string &str_obj)
{
    std::string::size_type pos = 0;
    while ((pos = str.find_first_not_of(str_obj, pos)) != std::string::npos)
    {
        std::cout << str[pos] << " ";
        ++pos;
    }
    std::cout << std::endl;
}
int main()
{
    std::string str{"ab2c3d7R4E6"};
    std::string numbers{"0123456789"};
    std::string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    std::cout << "str: " << str << std::endl;
    // find_first_of()
    std::cout << "numbers in str: ";
    find_num_char1(str, numbers);
    std::cout << "characters in str: ";
    find_num_char1(str, alphabet);

    // find_first_not_of()
    std::cout << "numbers in str: ";
    find_num_char2(str, alphabet);
    std::cout << "characters in str: ";
    find_num_char2(str, numbers);
    return 0;
}