#include <bits/stdc++.h>
using namespace std;

// Check if an array has duplicate elements.

bool hasDuplicate(vector<int>& arr){
    unordered_set<int> hashSet;
    for(int num : arr){
        if(hashSet.count(num)) return true; // duplicate found
        hashSet.insert(num);
    }
    return false;
}

int main(){

    vector<int> arr = {1,2,3,4,5,6};
    bool result = hasDuplicate(arr);
    if(result){
        cout << "Duplicate found" << endl;
    } else{
        cout << "Duplicate not found" << endl;
    }

    return 0;
}