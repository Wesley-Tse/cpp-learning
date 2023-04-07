#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    std::istream_iterator<int> in_iter(cin);
    std::istream_iterator<int> eof;
    vector<int> vec(in_iter, eof);
    cout << "vector: ";
    for (auto &i : vec)
        cout << i << " ";
    cout << endl;
    cout << "After sorted: ";
    std::sort(vec.begin(), vec.end());
    std::ostream_iterator<int> out_iter(cout, " ");
    for (auto &i : vec)
        *out_iter++ = i;
    cout << endl;
    return 0;
}
/*output
8 5 6 4 2 9 1 5 3 2 7 4 q
vector: 8 5 6 4 2 9 1 5 3 2 7 4
After sorted: 1 2 2 3 4 4 5 5 6 7 8 9
*/