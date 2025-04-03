#include<bits/stdc++.h>
using namespace std;

int main() {
    // Problem: Given a string, count the occurrences of each letter (lowercase only).

    string s = "hellosid";
    vector<int> freq(26, 0);

    for(char c : s){
        freq[c - 'a']++;
    }

    for(char ch='a'; ch <='z'; ch++){
        if(freq[ch - 'a'] > 0){
            cout << ch << "appears " << freq[ch -'a'] << " times" << endl;
        }
    }

    return 0;
}