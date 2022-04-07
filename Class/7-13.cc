#include <iostream>
#include <string>

struct Sales_data
{
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
    //
    const std::string isbn() const { return bookNo; }
    //
    Sales_data() = default;
    Sales_data(std::istream &is);
    Sales_data(const std::string &str) : bookNo(str) {}
    Sales_data(const std::string &str, unsigned n, double p) : bookNo(str), units_sold(n), revenue(p * n) {}
};

std::istream &read(std::istream &is, Sales_data &rhs)
{
    double price = 0;
    is >> rhs.bookNo >> rhs.units_sold >> price;
    rhs.revenue = price * rhs.units_sold;
    return is;
}

Sales_data::Sales_data(std::istream &is)
{
    read(is, *this);
}

std::ostream &print(std::ostream &os, const Sales_data &rhs)
{
    os << rhs.bookNo << " " << rhs.units_sold << " " << rhs.revenue;
    return os;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
    Sales_data sum = lhs;
    sum.units_sold += rhs.units_sold;
    sum.revenue += rhs.revenue;
    return sum;
}
int main()
{
    Sales_data total(std::cin);
    std::cout << total.bookNo << " " << total.units_sold << " " << total.revenue << std::endl;
    if (!total.isbn().empty())
    {
        std::istream &is = std::cin;
        while (is)
        {
            Sales_data trans(is);
            if (total.isbn() == trans.isbn())
                add(total, trans);
            else
            {
                print(std::cout, total) << std::endl;
                total = trans;
            }
        }
        print(std::cout, total) << std::endl;
    }
    else
    {
        std::cerr << "No data?!" << std::endl;
        return -1;
    }
    return 0;
}