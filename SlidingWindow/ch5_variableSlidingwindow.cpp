// longest subarray of sum k: return the size of longest subarray whose sum is equals to k
// tc: O(n) and sc: O(1)
#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int> &arr, int k){
    int n = arr.size();
    int i=0, j=0;
    long long sum = 0;
    int mx = 0;

    while(j<n){
        sum = sum + arr[j];
        
        if(sum > k){
            while (sum > k && i <= j)
            {
                sum = sum - arr[i];
                i++;
            }       
        }

        if(sum == k){
            if((j-i+1) > mx){
                mx = j-i+1;
            }
        }
        j++;
    }
    return mx;
}

int main() {

    vector<int> arr = {1, 2, 3, 1, 1, 1, 1};
    int k = 5;
    cout << maxSubArray(arr, k); 

    return 0;
}