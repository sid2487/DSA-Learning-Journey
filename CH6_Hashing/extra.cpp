#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> arr = {1,2,2,3,1,4};
    unordered_map<int, int> freq; // this creates an empty hash tables freq: { }

    for(int num : arr){
        freq[num]++; // freq: { 1 → 2, 2 → 2, 3 → 1, 4 → 1 }
    }
    

    for(auto it : freq){
        cout << it.first << "-" << it.second << endl;
    }

    return 0;
}

/*
When to Use Hashing ? Whenever you see problems like :

"Find duplicates"

"Count frequency"

"Check if two arrays have same elements"

"Check if pair exists with sum K"

"Longest subarray with sum K"

"Anagrams, Palindromes, Unique Elements"
*/