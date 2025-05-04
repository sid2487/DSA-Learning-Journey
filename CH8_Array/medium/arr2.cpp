// count an array of 0's, 1's and 2's
#include<bits/stdc++.h>
using namespace std;

// brute will be sorting(tc: O(n) and sc: O(1))
void bruteSol(vector<int> &arr){
    int n = arr.size();
    int count0=0, coutn1=0, count2=0;
    // sort(arr.begin(), arr.end());
    for(int i=0; i<n; i++){
        if(arr[i] == 0){
            count0++;
        } else if(arr[i] == 1){
            coutn1++;
        } else {
            count2++;
        }
    }
    cout << "0s: " << count0 << ", 1s: " << coutn1 << ", 2s: " << count2 << endl;
    
}



// better(tc:O(2n) and sc: O(1))
vector<int> better(vector<int>& arr){
    int n= arr.size();
    int cnt0 = 0, cnt1 = 0, cnt2 = 0;
    for(int i=0; i<n; i++){
        if(arr[i] == 0) cnt0++;
        else if(arr[i] == 1) cnt1++;
        else cnt2++;
    }
    for(int i=0; i<cnt0; i++){
        arr[i] = 0;
    } 
    for(int i=cnt0; i<cnt0 + cnt1; i++){
        arr[i] = 1;
    } 
    for(int i=cnt0+cnt1; i<n; i++){
        arr[i] = 2;
    }

    return arr;
}

// optimal sol
// dutch national flag algo(tc: O(n) and O(1))
void sortArray(vector<int>& arr, int n){
    int low = 0, mid =0, high = n-1;
    while(mid <= high) {
        if(arr[mid] ==0){
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        } 
        else if(arr[mid] == 1){
            mid++;
        } else {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main() {
        vector<int> arr = {2, 0, 2, 1, 1, 0};
        
        // vector<int> sorted = better(arr);`
        sortArray(arr, 6);

        for(int num : arr){
            cout << num << " ";
        }
    

    return 0;
}