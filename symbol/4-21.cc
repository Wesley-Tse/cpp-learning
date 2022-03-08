#include <iostream>
#include <vector>

using namespace std;

//判断vector<int>中的元素那些是奇数，将他们的值变为原来的2倍
int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> vec(a, a + 10);
    auto it = vec.begin(); //std::vector<int>::iterator it
    while (it != vec.end())
    {
        *it = ((*it % 2) == 1) ? *it * 2 : *it;
        cout << *it << endl;
        *it++;
    }
    return 0;
}