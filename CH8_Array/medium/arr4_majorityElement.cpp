// majortiy element: must be > n/2

// Given an array arr[] of size n, find the element that appears more than ⌊n / 2⌋ times.
// and if no such elements found, return -1.
#include<bits/stdc++.h>
using namespace std;

// brut
int majElement(vector<int>& arr, int n){
    for(int i=0; i<n; i++){
        int cnt = 0;
        for(int j=0; j<n; j++){
            if(arr[j] == arr[i]){
                cnt++;
            }
        }
        if(cnt > n/2) return arr[i];
    }
    return -1;
}

// better (tc: O(nlogn) + O(n) and sc: O(n)) hashing
int betterSol(vector<int>& arr){
    map<int, int>mpp;
    for(int i=0; i<arr.size(); i++){
        mpp[arr[i]]++;
    }

    for(auto it : mpp){
        if(it.second > (arr.size()/2)) {
            return it.first;
        }
    }
    return -1;

}

// opti sole(Moore's voting algorithum) (tc: O(n) and sc: O(1))   
int optiSol(vector<int>& arr, int n){
    int cnt = 0;
    int el;
    for(int i=0; i<n; i++){
        if(cnt == 0){
            cnt = 1;
            el = arr[i];
        } else if(arr[i] == el) {
            cnt++;
        } else{
            cnt--;
        }
    }

    // this step only needed if it says there might or might not be a majority element.
    int cnt1 = 0;
    for(int i=0; i<n; i++){
        if(arr[i] == el) cnt1++;
    }
    if(cnt1 > n/2){
        return el;
    } 
    return -1;
}

int main(){

    vector<int> arr = {2,2,6,2,6,2,6};
    cout << optiSol(arr, 7) << endl;
    



    return 0;
}