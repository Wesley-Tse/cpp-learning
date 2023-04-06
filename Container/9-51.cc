#include <iostream>
#include <string>
#include <vector>

class Date
{
public:
    explicit Date(const std::string &str = "");
    unsigned year = 2023;
    unsigned month = 2;
    unsigned day = 14;
    void print();

private:
    std::vector<std::string> month_name{"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    unsigned date_trans(const std::string &str);
};
void Date::print()
{
    std::cout << year << "-" << month << "-" << day << std::endl;
}
Date::Date(const std::string &str)
{
    if (str.empty())
        return;
    std::string split_char(" ,/");
    auto m_pos = str.find_first_of(split_char);
    if (m_pos == std::string::npos)
    {
        std::cerr << "This format of str is incorrect" << std::endl;
        return;
    }
    auto d_pos = str.find_first_of(split_char, m_pos + 1);
    month = date_trans(str.substr(0, m_pos));
    day = std::stoi(str.substr(m_pos + 1, d_pos));
    year = std::stoi(str.substr(d_pos + 1));
}
unsigned Date::date_trans(const std::string &str)
{
    if (str.empty())
        return 0;
    if (std::isdigit(str[0]))
        return std::stoi(str);
    for (size_t i = 0; i != 12; ++i)
    {
        if (str.find(month_name[i]) != std::string::npos)
            return i + 1;
    }
    return 0;
}

int main()
{
    Date date1;
    date1.print();

    Date date2("January 1, 1900");
    date2.print();

    Date date3("1/1/1900");
    date3.print();

    Date date4("Jan 1, 1900");
    date4.print();

    return 0;
}