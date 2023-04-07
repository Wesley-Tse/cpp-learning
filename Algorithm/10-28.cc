#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using std::cout;
using std::endl;
using std::list;
using std::vector;

void lprint(list<int> &lst)
{
    for (auto &i : lst)
        cout << i << " ";
    cout << endl;
}
int main()
{
    vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9};
    list<int> lst1{};
    list<int> lst2{};
    list<int> lst3{};
    cout << "vector: ";
    for (auto &i : vec)
        cout << i << " ";
    cout << endl;

    std::copy(vec.begin(), vec.end(), std::front_inserter(lst1));
    std::copy(vec.begin(), vec.end(), std::inserter(lst2, lst2.begin()));
    std::copy(vec.begin(), vec.end(), std::back_inserter(lst3));
    cout << "list1(front_inserter): ";
    lprint(lst1);
    cout << "list2(inserter(c, c.begin())): ";
    lprint(lst2);
    cout << "list3(back_inserter): ";
    lprint(lst3);
    return 0;
}
/*output
vector: 1 2 3 4 5 6 7 8 9
list1(front_inserter): 9 8 7 6 5 4 3 2 1
list2(inserter(c, c.begin())): 1 2 3 4 5 6 7 8 9
list3(back_inserter): 1 2 3 4 5 6 7 8 9
*/