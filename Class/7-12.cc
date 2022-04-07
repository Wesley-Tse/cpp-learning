#include <iostream>
#include <string>

struct Sales_data
{
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;

    Sales_data() = default;
    Sales_data(std::istream &is);
    Sales_data(const std::string &str) : bookNo(str) {}
    Sales_data(const std::string &str, unsigned n, double p) : bookNo(str), units_sold(n), revenue(p * n) {}
};

std::istream &read(std::istream &is, Sales_data &book)
{
    is >> book.bookNo;
    return is;
}

Sales_data::Sales_data(std::istream &is)
{
    read(is, *this);
}