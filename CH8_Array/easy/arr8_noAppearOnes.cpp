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
    return -1;
    
}

// better can be done by hashing
// optim
int optSol(vector<int>& arr){
    int xor1 = 0;
    for(int i=0; i<arr.size(); i++){
        xor1 = xor1^arr[i];
    }
    return xor1;
}


int main(){

    
    vector<int> arr = {1,1,2,3,3,4,4};
    int ans = optSol(arr);
    cout << ans << endl;

    return 0;
}