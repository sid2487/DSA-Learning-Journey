#include <bits/stdc++.h>
using namespace std;

// Pallindrome using recursion
// When dealing with large strings, passing by value (string s) will be inefficient because it creates multiple copies, leading to unnecessary memory consumption.
bool f(int i, string &s) {
    if( i >= s.size()/2) return true;
    if(s[i] != s[s.size() -i-1]) return false;
    return f(i+1, s);
}

int main(){

string s = "madsm";
cout << f(0, s) << endl;


    return 0;
}