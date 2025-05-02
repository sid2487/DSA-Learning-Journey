// check whether a given string is the anagram of the given second string or not.
#include <bits/stdc++.h>
using namespace std;

bool areAnagram(string s, string t){
    if(s.length() != t.length()) return false;

    vector<int> freq(26,0);

    for(char c : s) freq[c - 'a']++;
    for(char c : t) freq[c - 'a']--;

    for(int count : freq){
        if(count != 0) return false;
    }
    return true;
}

int main() {

    string s = "listen";
    string t = "silent";

    if(areAnagram(s,t)){
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}