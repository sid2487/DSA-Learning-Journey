// A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non - alphanumeric characters, it reads the same forward and backward.Alphanumeric characters include letters and numbers.

// I/P: s = "A man, a plan, a canal: Panama"
// o/p: amanaplanacanalpanama and true

#include <bits/stdc++.h>
using namespace std;

bool isPallindrom(string s) {

    // convert the string to lowercase and remove non-alphanumeric.
    string filtered;
    for(int i=0; i<s.size(); i++){
        if(isalnum(s[i])) {
            filtered.push_back(tolower(s[i]));
        }
    }

    // check if the filtered string is a palindrome
    int left = 0, right = filtered.size() - 1;
    while(left < right) {
        if (filtered[left] != filtered[right]) return false;
        left++;
        right--;
    }
    return true;
}

int main(){
    // string s = "A man, a plan, a canal: Panama";
    string s;
    cout << "Enter a string to check: " << endl;
    getline(cin, s);
    bool ans = isPallindrom(s);
    if(ans) {
        cout << "Trure" << endl;
    } else {
        cout << "False" << endl;
    }
}