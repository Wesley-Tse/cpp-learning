#include <iostream>
#include <list>
#include <algorithm>
#include <vector>

using std::cout;
using std::endl;
using std::list;
using std::vector;

int main()
{
    vector<int> vec{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << "vector: ";
    for (auto &i : vec)
        cout << i << " ";
    cout << endl;
    list<int> lst;
    std::copy(vec.cbegin() + 3, vec.cbegin() + 8, std::front_inserter(lst));
    cout << "list: ";
    for (auto &i : lst)
        cout << i << " ";
    cout << endl;
    return 0;
}
/*output
vector: 1 2 3 4 5 6 7 8 9
reverse vector: 9 8 7 6 5 4 3 2 1
*/