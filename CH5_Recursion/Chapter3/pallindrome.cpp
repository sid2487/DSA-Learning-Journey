#include <bits/stdc++.h>
using namespace std;

// Pallindrome using recursion
// When dealing with large strings, passing by value (string s) will be inefficient because it creates multiple copies, leading to unnecessary memory consumption.
bool f(int i, string &s){
    if(i >= s.size() / 2) return true;
    if(s[i] != s[s.size()-i-1]) return false;
    return f(i+1, s);
}

int main(){
    string s = "madam";
    bool ans = f(0, s);
    if(ans) {
        cout << "True" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0;
}

// When you pass a string by value(string s), a new copy of the string is created every time the function is called.

// Since recursion involves multiple function calls(stack frames), each recursive call would create a separate copy of the string, leading to increased memory consumption.