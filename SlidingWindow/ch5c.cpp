// Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.

// important: if the array contains negative no's, then sliding window appraoch fails and we have to shift to prefixsum + hashmap aproach.

#include<bits/stdc++.h>
using namespace std;

int subarraySum(vector<int> & arr, int k){
    unordered_map<int, int> prefixSumCount;
    int n = arr.size();
    int sum = 0;
    int count = 0;
    prefixSumCount[0] = 1;

    for(int i=0; i<n; i++){
        sum += arr[i];

        if(prefixSumCount.find(sum-k) != prefixSumCount.end()){
            count += prefixSumCount[sum-k];
        }
        prefixSumCount[sum]++;
    }
    return count;
}

int main() {



    return 0;
}