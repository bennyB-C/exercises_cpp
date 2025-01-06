#include <iostream>
#include <string>
#include <list>
using namespace std;

string get_longest(list<string> &l){
    string max = l.front();
    for (string a : l){
        if(max.size() < a.size()){
            max = a;
        }
    }
    return max;
}

bool verify_new_string(string new_s, char c){
    for(char h : new_s){
        if(h == c)
            return true;
    }
    return false;
}

string find_longest_substr(string s){
    int n = s.size();
    string new_s;
    list<string> list_possible; // possible answers
    new_s.push_back(s.at(0));

    for (int i = 1; i < n; ++i){
        if(verify_new_string(new_s,s.at(i))){
            // i need to confirm if s.at(i) is in the new string
            list_possible.push_back(new_s);
            new_s.clear();
        }
        new_s.push_back(s.at(i));
    }
    return get_longest(list_possible);
}

int main(){
    //string a = "abcdefg";
        // here the longest subtr should be abcdefg
        

    // string a = "ppollksdkm";
        // "ppollksdkm", --> "lksd"

    string a = "hello";
        // "hello" --> "hel"
    cout << find_longest_substr(a);
    return 0;
}