// remove duplicates in-place from sorted array

#include<bits/stdc++.h>
using namespace std;

// set takes O(logn) as tc so here  tc: O(nlogn+n) & sc: O(n)
// brutforce approach

// for optimise approach use two pointer approach

// remove duplicates

int main() {

    int arr[] = {1,1,2,2,2,3,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    /*
    set<int> st;
    for(int i=0; i<n; i++){
        st.insert(arr[i]);
    }

    int index = 0;
    for(auto it : st){
        arr[index] = it;
        index++;
    }
    cout << index << endl;
*/

    // optimal approach(two pointer approach)
    // tc; O(n) and sc: O(1);

    int i = 0;
    for (int j = 1; j<n; j++){
        if(arr[j] != arr[i]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    cout << i+1 << endl;

        return 0;
}

// return vector<int> arr(arr.begin(), arr.begin() + i + 1); // if want to retun the array in case if you write it in a function 