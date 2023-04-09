#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << "vector: ";
    for (auto &i : vec)
        cout << i << " ";
    cout << endl;
    cout << "reverse vector: ";
    for (auto r_it = vec.cend() - 1; r_it >= vec.cbegin(); r_it--)
        cout << *r_it << " ";
    cout << endl;
    return 0;
}
/*output
vector: 1 2 3 4 5 6 7 8 9
reverse vector: 9 8 7 6 5 4 3 2 1
*/