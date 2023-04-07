#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

class Sales_data
{
public:
    Sales_data() = default;
    Sales_data(const std::string &str) : bookNo(str) {}
    Sales_data(const std::string &str, unsigned n, double p) : bookNo(str), units_sold(n), revenue(p * n) {}
    std::string isbn() const { return bookNo; };

private:
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

void vprint(std::vector<Sales_data> vec)
{
    for (const auto &i : vec)
        std::cout << i.isbn() << " ";
    std::cout << std::endl;
}

int main()
{
    Sales_data s1("0-401-783-X");
    Sales_data s2("2-201-386-X");
    Sales_data s3("1-101-18345-X", 5, 13.6);
    Sales_data s4("0-301-2835-X", 3, 24.8);
    std::vector<Sales_data> vec{s1, s2, s3, s4};
    std::cout << "Befor: ";
    vprint(vec);
    std::stable_sort(vec.begin(), vec.end(),
                     [](const Sales_data &s1, const Sales_data &s2)
                     { return s1.isbn() < s2.isbn(); });
    std::cout << "After: ";
    vprint(vec);
    return 0;
}
/*output:
Befor: 0-401-783-X 2-201-386-X 1-101-18345-X 0-301-2835-X
After: 0-301-2835-X 0-401-783-X 1-101-18345-X 2-201-386-X
*/