#include <iostream>
#include <string>

struct Sales_data
{
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
    double avg_price = units_sold * revenue;
    std::string isbn() const { return bookNo; };
};
Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
    Sales_data sum = lhs;
    sum.units_sold += rhs.units_sold;
    sum.revenue += rhs.revenue;
    return sum;
}

std::istream &read(std::istream &is, Sales_data &rhs)
{
    is >> rhs.bookNo >> rhs.units_sold >> rhs.revenue;
    rhs.revenue *= rhs.units_sold;
    return is;
}

std::ostream &print(std::ostream &os, const Sales_data &rhs)
{
    os << rhs.bookNo << " " << rhs.units_sold << " " << rhs.revenue << rhs.avg_price;
    return os;
}
