#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    // aabbaa
    // length
        // iterate
            // create a string in the reverse order
                // compare them

    string s = "aabbaa";
    string s_reverse;
    cout << s.size() << endl;
    int k = 0;
    for (int i = s.size()-1; i >= 0; --i)
    {

        if(s[i] != s[k]){
            cout << "No Palindrome" << endl;
            return -1;
        }
        ++k;
    }

    cout << "Palindrome" << endl;
    return 1;
}