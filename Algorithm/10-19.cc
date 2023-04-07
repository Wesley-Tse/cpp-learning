#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using std::cout;
using std::endl;
using std::string;
using std::vector;

void vprint(std::vector<std::string> &words)
{
    for (const auto &word : words)
        std::cout << word << " ";
    std::cout << std::endl;
}
string make_plural(size_t count, const string &word, const string &s)
{
    return count > 1 ? word + s : word;
}
void elimDups(vector<string> &words)
{

    std::sort(words.begin(), words.end());
    auto iter = std::unique(words.begin(), words.end());
    words.erase(iter, words.end());
}
void biggest(vector<string> &words, vector<string>::size_type sz)
{
    elimDups(words);
    std::stable_sort(words.begin(), words.end(),
                     [](const std::string &str1, const std::string &str2)
                     { return str1.size() < str2.size(); });
    auto iter = std::stable_partition(words.begin(), words.end(),
                                      [sz](const std::string &word)
                                      { return word.size() < sz; });
    auto count = words.end() - iter;
    cout << count << " " << make_plural(count, "word", "s") << " of length " << sz << " or longer:" << endl;
    std::for_each(iter, words.end(), [](const string &word)
                  { cout << word << " "; });
    cout << endl;
}
int main()
{
    vector<string> words{"this", "is", "change", "test", "which", "have", "is", "history", "english", "fly"};
    cout << "words: ";
    vprint(words);
    vector<string>::size_type sz = 5;
    biggest(words, sz);
    return 0;
}
/*output
words: this is change test which have is history english fly
4 words of length 5 or longer.
which change english history
*/