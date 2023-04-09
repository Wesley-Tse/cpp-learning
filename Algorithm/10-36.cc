#include <iostream>
#include <list>
#include <algorithm>

using std::cout;
using std::endl;
using std::list;

int main()
{
    list<int> lst{0, 2, 9, 4, 5, 6, 0, 8, 9};
    cout << "list: ";
    for (auto &i : lst)
        cout << i << " ";
    cout << endl;
    auto it = std::find(lst.rbegin(), lst.rend(), 0);
    if (it == lst.rend())
        cout << "0 is not found!";
    else
    {
        int cnt = 0;
        for (auto i = lst.cbegin(); i != it.base(); i++)
            ++cnt;
        cout << "Last 0 is in front of " << cnt << endl;
    }
    return 0;
}
/*output
list: 0 2 9 4 5 6 0 8 9
Last 0 is in front of 7
*/