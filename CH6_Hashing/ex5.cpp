#include <bits/stdc++.h>
using namespace std;

// Hashing is a technique where we store values in an indexed data structure (like an array or hash table) for quick access.

int main() {

    // Problem: Given an array with large numbers, count occurrences.
    vector<int> arr = {1001, 2002, 1001, 3003, 1001, 2002};
    unordered_map<int, int> freq;

    for(int num : arr) {
        freq[num]++;
    }

    for(auto it : freq){
        cout << "number " << it.first << " appears " << it.second << " times " << endl;
    }

    return 0;
}