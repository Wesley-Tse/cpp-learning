#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>

using std::cout;
using std::endl;
using std::string;
using std::vector;

void rwNumbers(std::ifstream &ifs, std::ofstream &ofs_odd, std::ofstream &ofs_even)
{
    std::istream_iterator<int> in_iter(ifs);
    std::istream_iterator<int> eof;
    std::ostream_iterator<int> odd_iter(ofs_odd, " "), even_iter(ofs_even, "\n");

    while (in_iter != eof)
    {
        if (*in_iter % 2)
            *odd_iter++ = *in_iter;
        else
            *even_iter++ = *in_iter;
        ++in_iter;
    }
}

int main(int argc, char **argv)
{
    if (argc < 4)
    {
        std::cerr << "Need 3 Files: [in][odd][even]!" << std::endl;
        return -1;
    }
    std::ifstream ifs(argv[1]);
    if (!ifs)
    {
        std::cerr << "Cannot Open File: " << argv[1] << std::endl;
        return -1;
    }
    std::ofstream ofs_odd(argv[2]);
    if (!ofs_odd)
    {
        std::cerr << "Cannot Open File: " << argv[2] << std::endl;
        return -1;
    }
    std::ofstream ofs_even(argv[3]);
    if (!ofs_even)
    {
        std::cerr << "Cannot Open File: " << argv[3] << std::endl;
        return -1;
    }
    rwNumbers(ifs, ofs_odd, ofs_even);
    return 0;
}