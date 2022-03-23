#include <iostream>
#include <string>

struct Sales_Data
{
    std::string bookNo;
    unsigned unit_sold = 0;
    double revenue = 0.0;
};

//程序会将每个ISBN的所有数据合并起来，存入名为tota1的变量中。使用另一个名为trans 的变量保存读取的每条销售记录。
//如果trans 和tota1指向相同的ISBN, 我们会更新tota1的值。
//否则，我们会打印tota1的值，并将其重置为刚刚读取的数据(trans)

int main()
{
    Sales_Data total;
    if (std::cin >> total.bookNo)
        Sales_Data trans;
}