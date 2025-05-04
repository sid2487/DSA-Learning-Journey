// Character hashing
#include <bits/stdc++.h>
using namespace std;

// if only small cases characters are there then take hash length hash[26] and print hash[char-'a] but if not then hash[252] and print hash[char]

// If we have both uppercase and lowercase letters, we need 52 slots(hash[52]).
// If we allow all ASCII characters(e.g., punctuation, numbers, symbols), we use hash[256].
// If we're handling Unicode characters, a hash map (unordered_map<char, int>) is better.

int main(){

    string s;
    cout << "Enter the string: ";
    cin >> s;

    // pre compute for small cases
    int hash[26] = {0};
    for (int i=0; i<s.size(); i++){
        hash[s[i] - 'a']++;
    }

    

    

    // query
    int query;
    cout << "Enter the query: ";
    cin >> query;

    while(query--){
        char c;
        cout << "Enter the character you want to check: ";
        cin >> c;
        // fetch
        cout << "The number of times " << c << " " << "is: " << hash[c - 'a'] << endl;
    }

     


    return 0;
}