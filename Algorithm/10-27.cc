#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using std::cout;
using std::endl;
using std::list;
using std::vector;

int main()
{
    vector<int> vec{1, 2, 2, 3, 4, 5, 5, 6, 7, 8};
    list<int> lst{};
    cout << "vector: ";
    for (auto &i : vec)
        cout << i << " ";
    cout << endl;
    std::unique_copy(vec.begin(), vec.end(), std::back_inserter(lst));
    cout << "list: ";
    for (auto &i : lst)
        cout << i << " ";
    cout << endl;

    return 0;
}
/*output
vector: 1 2 2 3 4 5 5 6 7 8
list: 1 2 3 4 5 6 7 8
*/