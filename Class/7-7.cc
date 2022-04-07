#include <iostream>
#include <string>

struct Sales_data
{
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
    double avg_price() { return units_sold == 0 ? 0.0 : revenue / units_sold; };
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
    os << rhs.bookNo << " " << rhs.units_sold << " " << rhs.revenue;
    return os;
}

int main()
{
    Sales_data total;
    if (read(std::cin, total))
    {
        Sales_data trans;
        while (read(std::cin, trans))
        {
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
