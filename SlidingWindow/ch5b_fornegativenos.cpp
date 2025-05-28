// // longest subarray of sum k with negative nos too: return the size of longest subarray whose sum is equals to k
// we will use hashing to store all the prev sums and standing at any jth positon we will check previously is there any prefixsum give the remaining(sum-k) in the map.

#include<bits/stdc++.h>
using namespace std;

int longestSubarraySum(vector<int> arr, long long k){
    map<long, long> preSumMap;
    long long sum = 0;
    int maxLen = 0;
    for(int i=0; i<arr.size(); i++){
        sum += arr[i];

        // subarray starts from index 0
        if(sum == k){
            maxLen = max(maxLen, i+1);
        }
        
        // if(sum-k) exists, update max length
        long long rem = sum - k;
        if(preSumMap.find(rem) != preSumMap.end()){
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);
        }

        // store only first occurece of this sum(here use the condn only when negative nos are there in the input, other wise directly store in map)
        if(preSumMap.find(sum) == preSumMap.end()){
            preSumMap[sum] = i; // storing the index
        }

    }

    return maxLen;
}

int main(){




    return 0;
}