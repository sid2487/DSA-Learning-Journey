// maximum of all subarrays(larger no in the given window size)
// so suppose if k=3 then we have to find the max element in every window of size 3 as the window slides through the array.
// tc: O(n) because in each element goes in once and comes out once
// sc: O(k) here the result vector ans stores (n-k+1) maximums, which is also O(n) but we genrally dont count output storage unless specified.

#include <bits/stdc++.h>
using namespace std;

vector<int> maxSubArray(vector<int> &arr, int k){
    int i=0, j=0;
    vector<int> ans(0);
    list <int> l;
    int n = arr.size();
    while(j<n){

        while(l.size() > 0 && l.back() < arr[j]){
            l.pop_back();
        }
        l.push_back(arr[j]);


        if((j-i+1) < k){
            j++;
        } else if((j-i+1) == k){
            ans.push_back(l.front());

            if(l.front() == arr[i]){
                l.pop_front();
            }
            i++;
            j++;
        }
    }
    return ans;
}



int main() {

    vector <int> arr = {1,2,-8,-5,12,0,5,4};
    int k = 3;
    vector<int> result = maxSubArray(arr, k);

    for(int val : result){
        cout << val << " ";
    }
    cout << endl;


    return 0;
}