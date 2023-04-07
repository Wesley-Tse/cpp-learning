#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>

using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::placeholders::_1;

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
bool check_size(const string &str, string::size_type sz)
{
    return str.size() >= sz;
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
    auto iter = std::stable_partition(words.begin(), words.end(), std::bind(check_size, _1, sz));
    auto count = iter - words.begin();
    cout << count << " " << make_plural(count, "word", "s") << " of length " << sz << " or longer:" << endl;
    std::for_each(words.begin(), iter, [](const string &word)
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