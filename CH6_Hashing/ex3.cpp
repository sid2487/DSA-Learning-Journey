#include <bits/stdc++.h>
using namespace std;

int main() {
    // Problem: Given an array of numbers from 0-9, count how many times each number appears.

    vector<int> arr = {1, 3, 3, 2, 5, 3, 2, 1, 5, 5, 5};
    vector<int> freq(10, 0);

    // counting frequency
    for(int num : arr){
        freq[num]++;
    }

    // display
    for(int i=0; i<10; i++){
        cout << "Number "<< i << " appears " << freq[i] << " times " << endl;
    }

    return 0;
}