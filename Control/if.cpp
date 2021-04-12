#include <iostream>
using namespace std;

int main()
{
    int val = 0, temp = 0;
    if(cin >> temp){
        int count = 1;
        while(cin >> val){
            if(val == temp)
                count++;
            else{
                cout << temp <<" occours " << count << "times" << endl;
                temp = val;
                count = 1;
            }
        }
        cout << temp <<" occours " << count << "times" << endl;
    }
    return 0;
}