#include <bits/stdc++.h>
using namespace std;

// Find the first non-repeating element in an array.

int  firstNonRepeating(vector<int>& arr) {
    unordered_map<int, int> freq;
    for(int num : arr) {
        freq[num]++;
    }

    for(int num : arr){
        if(freq[num] == 1) return num;
    }
    return -1;
}

int main() {

    vector<int> arr = {4, 5, 1, 2, 0, 4, 5, 2};
    cout << "First non-repeating element: " << firstNonRepeating(arr) << endl;

    return 0;
}