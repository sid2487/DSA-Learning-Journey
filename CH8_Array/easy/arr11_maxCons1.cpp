// max. consecutive 1's   (tc: O(n) and sc: O(1))
#include <bits/stdc++.h>
using namespace std;

int findMaxConsOnes(vector<int>& nums){
    int maxi = 0;
    int cnt = 0;
    for(int i=0; i<nums.size(); i++){
        if(nums[i] == 1){
            cnt++;
            maxi = max(maxi, cnt);
        } else {
            cnt = 0;
        }
    }
    return maxi;
}

int main() {

    vector<int> arr = {1, 1, 0, 1, 1, 1};
    int ans = findMaxConsOnes(arr);
    cout << ans << endl;

    return 0;
}