#include <iostream>
#include <vector>

using namespace std;

bool isPrefix();
bool isPrefix(const vector<int> &v1, const vector<int> &v2)
{
    auto it1 = v1.cbegin();
    auto it2 = v2.cbegin();
    for (; it1 != v1.cend() && it2 != v2.cend(); ++it1, ++it2)
        if (*it1 != *it2)
            break;

    return it1 == v1.cend() || it2 == v2.cend();
}

int main()
{
    vector<int> v1{1, 2, 3, 4};
    vector<int> v2{1, 2, 3, 4, 5, 6, 7, 8};
    cout << (isPrefix(v1, v2) ? "True" : "False") << endl;

    return 0;
}
