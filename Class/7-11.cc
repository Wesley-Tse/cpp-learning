#include <iostream>
#include <string>

struct Sales_data
{
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;

    Sales_data() = default;
    Sales_data(const std::string &str) : bookNo(str) {}
    Sales_data(const std::string &str, unsigned n, double p) : bookNo(str), units_sold(n), revenue(p * n) {}
};

int main()
{
    Sales_data total1("deep learing", 1, 18.5);
    Sales_data total2("kungfu");
    std::cout << total1.bookNo << " " << total1.units_sold << " " << total1.revenue << std::endl;
    std::cout << total2.bookNo << " " << total2.units_sold << " " << total2.revenue << std::endl;
}