#include <iostream>
#include <string>

class Sales_data
{
    friend Sales_data add(const Sales_data &, const Sales_data &);
    friend std::istream &read(std::istream &, Sales_data &);
    friend std::ostream &print(std::ostream &, const Sales_data &);

public:
    Sales_data(const std::string str, unsigned n, double price)
        : bookNo(str), units_sold(n), revenue(n * price)
    {
        std::cout << "this is Sales_data(3 arg:)" << std::endl;
    }
    Sales_data() : Sales_data(" ", 0, 0.)
    {
        std::cout << "this is Sales_data(default:)" << std::endl;
    }
    Sales_data(const std::string str) : Sales_data(str, 0, 0)
    {
        std::cout << "this is Sales_data(1 arg string:)" << std::endl;
    }
    Sales_data(std::istream &is) : Sales_data()
    {
        std::cout << "this is Sales_data(1 arg istream:)" << std::endl;
        read(is, *this);
    }
    std::string isbn() const { return bookNo; }
    Sales_data &combine(const Sales_data &);

private:
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

std::istream &read(std::istream &is, Sales_data &item)
{
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

int main()
{
    std::cout << "--------------------- ---book1---------- --------------" << std::endl;
    Sales_data book1;
    std::cout << "--------------------book2(std::cin)--------------------" << std::endl;
    Sales_data book2(std::cin);
    std::cout << "------------------book3(\" book3 \")-------------------" << std::endl;
    Sales_data book3("book3");
    std::cout << "---------------book4(\" book4 \", 0, 0.)---------------" << std::endl;
    Sales_data book4("book4", 0, 0.);

    return 0;
}