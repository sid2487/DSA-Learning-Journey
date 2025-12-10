#include <bits/stdc++.h>
using namespace std;

vector <int> twoSum(vector <int> &arr, int target){
    map<int, int> mpp;
    int n = arr.size();

    for(int i=0; i<n; i++){
        int num = arr[i];
        int mN = target - num;

        if(mpp.find(mN) != mpp.end()){
            return {mpp[mN], i};
        }
        mpp[num] = i;
    }
    return {-1, -1};
}

int main(){



    return 0;
}