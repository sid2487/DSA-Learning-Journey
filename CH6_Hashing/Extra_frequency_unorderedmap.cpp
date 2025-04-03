#include <bits/stdc++.h>
using namespace std;

// Count occurrences of elements when numbers are large(not within a fixed range).

vector<int> frequencyCount(vector<int>& arr) {
    unordered_map<int, int> freq;
    for(int num : arr){
        freq[num]++;
    }

    vector<int> result;
    for(auto it : freq){
        cout << it.first << " appears " << it.second << " times " << endl;
    }
    return result;
}

    int main()
{

    vector<int> arr = {1000, 2000, 1000, 5000, 5000, 5000};
    frequencyCount(arr);

    return 0;
}