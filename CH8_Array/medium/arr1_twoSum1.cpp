// two sum
// two varraiton(ist tell if target exist in the given array or not and second is to give the indexes)

// Given an array of integers nums and an integer target, return the indices of the two numbers such that they add up to the target.

#include<bits/stdc++.h>
    using namespace std;

// in the bruteforce sol, we can simply run two loops and check if arr[i]+arr[j] == target then return either true or index.
// but tc: O(n^2)

// better using hashing(O(n*logn)) and sc: O(n)
vector<int> twoSum(vector<int>& arr, int target){
    map<int, int> mpp;
    int n = arr.size();
    for(int i=0; i<n; i++){
        int num = arr[i];
        int moreNeeded = target - num;
        if(mpp.find(moreNeeded) != mpp.end()) {
            return {mpp[moreNeeded], i};
        }
        mpp[num] = i;
    }
    return {-1,-1};
}
// optimal: two pointer( first sort the array then if want to incr, move left pointer and want less then move right pointer)
// tc: O(n) + O(nlogn) and sc: O(1)

    string optimal(vector<int>& arr, int target){
        int n = arr.size();
        int left = 0, right = n-1;
        sort(arr.begin(), arr.end()); 
        while(left < right){
            int sum = arr[left] + arr[right]; 
            if(sum == target){
                return "Yes" ;
            } else if(sum < target) {
                left++;
            } else {
                right--;
            }
        }
        return "No" ;
    }

int main(){

    
vector<int> arr = {2,7,11,15};
// vector<int> ans = twoSum(arr, 9);

 
// cout << ans[0] << " " << ans[1] << endl;

string result = optimal(arr, 9);
cout << result << endl;

    return 0;
}


/*
// important points for map

mpp.find(key) -->> search for key, return iterator mpp.end()
mpp.end() --> iterator that represent "not found"
mpp.find(key) != mpp.end() -->> key exist in the map because its not pointing to the mpp.end()
mpp.find(key) == mpp.end() -->> key does not exist because its returning or pointing to the mpp.end()

*/