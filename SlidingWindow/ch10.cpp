// Maximum Subarray: Given an integer array nums, find the subarray with the largest sum, and return its sum.

#include <bits/stdc++.h>
using namespace std;

int maxSubarray(vector<int> &arr){
    int currentSum = 0;
    int maxSum = INT_MIN;

    for(int i=0; i<arr.size(); i++){
        currentSum += arr[i];
        maxSum = max(maxSum, currentSum);
        if(currentSum<0) currentSum = 0;
    }
    return maxSum;
}

int main(){
    vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};
    int ans = maxSubarray(arr);
    cout << ans << endl;

    return 0;
}