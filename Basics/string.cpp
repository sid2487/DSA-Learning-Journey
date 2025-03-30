#include <bits/stdc++.h>
using namespace std;

int main(){

        // string also stores every character in terms of indexes starting with 0
        string s = "siddharth";
        // cout << s[8];
        int len = s.size(); // this is how we print length
        s[len-1] = 't'; // you can also change the things also
        s[8] = 'a';
        cout << s[len - 1] << endl;
        cout << len << endl;
        cout << s[8];


    
    return 0;
}