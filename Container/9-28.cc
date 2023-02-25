#include <iostream>
#include <string>
#include <forward_list>

using std::cout;
using std::endl;
using std::forward_list;
using std::string;

void find_insert(forward_list<string> &sflst, string str1, string str2)
{
    auto prev = sflst.before_begin();
    auto iter = sflst.begin();

    if (sflst.empty())
    {
        iter = sflst.insert_after(prev, str2);
        return;
    }

    while (iter != sflst.end())
    {
        if (*iter == str1)
        {
            iter = sflst.insert_after(iter, str2);
            return;
        }
        else
        {
            prev = iter;
            ++iter;
        }
    }
    sflst.insert_after(prev, str2);
}

void print_flist(forward_list<string> flist)
{
    auto iter = flist.cbegin();
    while (iter != flist.cend())
    {
        cout << *iter << " ";
        ++iter;
    }
    cout << endl;
}
int main()
{
    forward_list<string> sflist1 = {};
    forward_list<string> sflist2 = {"Akali", "Ruizi", "Jinx", "Alice", "Jakey"};
    forward_list<string> sflist3 = {"Akali", "Ruizi", "Jinx", "Rookie", "Jakey"};
    string str1("Alice"), str2("Bob");
    cout << "string1: " + str1 + " " + "string2: " + str2 << endl;

    cout << "sflsit1: ";
    print_flist(sflist1);
    find_insert(sflist1, str1, str2);
    cout << "after insert: "; //{Bob}
    print_flist(sflist1);

    cout << "sflsit2: ";
    print_flist(sflist2);
    find_insert(sflist2, str1, str2);
    cout << "after insert: "; //{Akali Ruizi Jinx Alice Bob Jakey}
    print_flist(sflist2);     //{Akali Ruizi Jinx Rookie Jakey Bob}

    cout << "sflsit3: ";
    print_flist(sflist3);
    find_insert(sflist3, str1, str2);
    cout << "after insert: ";
    print_flist(sflist3);
}