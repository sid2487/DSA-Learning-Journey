// find the no that appears ones
#include <bits/stdc++.h>
using namespace std;

// brut(tc: O(n^2) and sc: O(1 ))
int noAppearOnes(vector<int>& arr){
    int num;
    for(int i=0; i<arr.size(); i++){
        num = arr[i];
        int cnt = 0;
        for(int j=0; j<arr.size(); j++){
            if(arr[j] == num){
                cnt++;
            }
        }
        if (cnt == 1) return num;
    }
    return -1; // Return -1 if no number appears exactly once
}

// better can be done by hashing(tc: O(3n) and sc: depends on input)

// int betterSol(vector<int>& arr) {

// you're creating a hash array of size maxi + 1 to count how many times each number appears.
    //     int maxi = arr[0];
    //     for(int i=0; i<arr.size(); i++) {
    //         maxi = max(maxi, arr[i]);
    //     }
    //     vector<int> hash(maxi + 1, 0);
    //     for(int i=0; i<arr.size(); i++){
    //         hash[arr[i]]++;
    //     }

    //     for(int i=0; i<arr.size(); i++){
    //         if(hash[arr[i]] == 1){
    //             return arr[i];
    //         }
    //     }
    //     return -1; // Return -1 if no number appears exactly once
    // }

    // better can be done using unordered map which handles negative nos and large nos too

    // tc : worst case O(nlogm) where m is the size of map which is (n/2+1) and average case : O(n)
    // sc : O(n/2+1)

    int betterSol(vector<int> &arr)
{
    unordered_map<int, int> hash;

    for(int num : arr){
        hash[num]++;
    }

    // for(int num : arr) {
    //     if(hash[num] == 1) return num;
    // }

    for(auto num : hash){
        if(num.second == 1) return num.first;
    }
    return -1;
}

// optim tc: O(n) and sc: O(1)
int optSol(vector<int>& arr){
    int xor1 = 0;
    for(int i=0; i<arr.size(); i++){
        xor1 = xor1^arr[i];
    }
    return xor1;
}


int main(){

    
    vector<int> arr = {1,1,2,3,3,4,4};
    int ans = betterSol(arr);
    cout << ans << endl;

    return 0;
}