#include <iostream>
#include <string>
#include <fstream>

void find_longest_word(std::ifstream &ifs)
{
    std::string word, longest_word;
    while (ifs >> word)
    {
        if (word.find_first_not_of("aceimnorsuvwxz") == std::string::npos && word.size() > longest_word.size())
            longest_word = word;
    }
    if (longest_word.size())
        std::cout << "The longest word is: " << longest_word << std::endl;
    else
        std::cout << "Cannot find the word!" << std::endl;
}

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

    find_longest_word(ifs);

    return 0;
}