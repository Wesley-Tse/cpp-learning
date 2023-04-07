#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>

using std::cout;
using std::endl;
using std::string;
using std::vector;

bool check_size(const string &str, string::size_type sz)
{
    return str.size() < sz;
}
int main()
{
    vector<int> vec{1, 3, 5, 9, 6, 2, 8};
    cout << "vector: ";
    for (auto &i : vec)
        cout << i << " ";
    cout << endl;
    string str("china");
    auto iter = std::find_if(vec.begin(), vec.end(), std::bind(check_size, str, std::placeholders::_1));
    cout << "First elem bigger than length of " << str << " is " << *iter << endl;
    return 0;
}
/*output
vector: 1 3 5 9 6 2 8
First elem bigger than length of china is 9
*/