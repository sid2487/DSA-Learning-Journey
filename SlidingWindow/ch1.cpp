#include <bits/stdc++.h>
using namespace std;

// how to identify the problem of sliding window: the qs will be mostly of arr or string and asked about subarray(beacause sliding window is always in continuous) or substring and asked about largest, maximum or minimum and also given a number k which is window size(fixed window size), or asked to find the window size(varraible window size)

// QS: find the maximum sum of the given length of the subarray from the given array(tc: O(n) and O(1))
int maxSubarraySum(vector<int> & arr, int k){
    int n = arr.size();
    int i=0, j=0;
    int sum = 0;
    int maxSum = INT_MIN;

    while(j<n){
        sum += arr[j];

        if((j-i+1) < k){
            j++;
        } else if((j-i+1) == k){
            maxSum = max(maxSum, sum);
            sum -= arr[i];
            i++;
            j++;
        }
    }
    return maxSum;
}

int maxSubArrySum(vector<int> &arr, int k){
    int n = arr.size();
    int i=0, j=0;
    int sum = 0;
    int maxSum = INT_MIN;

    while(j < n){
        sum += arr[j];

        if((j-i+1) == k){
            maxSum = max(maxSum, sum);
            sum -= arr[i];
            i++;
        }
        j++;
    }
    return maxSum;
}

int main(){

    vector<int> arr = {1,5,6,7,5,4};
    int ans = maxSubarraySum(arr, 3);
    // int ans = maxSubArrySum(arr, 3);
    cout << ans << endl;



    return 0;
}