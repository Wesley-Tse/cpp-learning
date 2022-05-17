#include <iostream>
#include <fstream>
#include <string>

using std::cout;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::ostream;
using std::string;

struct Sales_data
{
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;

    void CalcRevenue(double price);
    double CalcAveragePrice();
    void SetData(Sales_data data);
    void AddData(Sales_data data);
    void Print(ostream &);
};

void Sales_data::CalcRevenue(double price)
{
    revenue = units_sold * price;
}

void Sales_data::SetData(Sales_data data)
{
    bookNo = data.bookNo;
    units_sold = data.units_sold;
    revenue = data.revenue;
}

void Sales_data::AddData(Sales_data data)
{
    if (bookNo != data.bookNo)
        return;
    revenue *= units_sold;
    units_sold += data.units_sold;
    revenue += data.units_sold * data.revenue;
}

double Sales_data::CalcAveragePrice()
{
    if (units_sold != 0)
        return revenue / units_sold;
    else
        return 0.0;
}

void Sales_data::Print(ostream &os)
{
    os << bookNo << " " << units_sold << " " << revenue << std::endl;
}

int main(int argc, char *argv[])
{
    ifstream ifile(argv[1]);
    ofstream ofile(argv[2], ofstream::app);
    Sales_data total;
    if (ifile >> total.bookNo >> total.units_sold >> total.revenue)
    {
        Sales_data trans;
        while (ifile >> trans.bookNo >> trans.units_sold >> trans.revenue)
        {
            if (total.bookNo == trans.bookNo)
                total.AddData(trans);
            else
            {
                total.Print(ofile);
                total = trans;
            }
        }
        total.Print(ofile);
    }
    else
    {
        std::cerr << "No data?!" << std::endl;
        return -1;
    }
    return 0;
}
