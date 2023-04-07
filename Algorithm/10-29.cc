#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iterator>

using std::cout;
using std::endl;
using std::string;
using std::vector;

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        std::cerr << "Please Input File!" << std::endl;
        return -1;
    }
    std::ifstream ifs(argv[1]);
    if (!ifs)
    {
        std::cerr << "Cannot Open " << argv[1] << std::endl;
        return -1;
    }
    std::istream_iterator<string> in_iter(ifs);
    std::istream_iterator<string> eof;
    vector<string> vec(in_iter, eof);
    // vector<string> vec;
    // while (in_iter != eof)
    //     vec.push_back(*in_iter++);
    cout << "vector: ";
    for (auto &i : vec)
        cout << i << " ";
    cout << endl;
    return 0;
}
/*output
vector: your news feed helps you keep up with recent activity on repositories you watch or star and people you follow.
*/