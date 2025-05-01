// rotated by k times

#include<bits/stdc++.h>
using namespace std;

void leftRotate(int arr[], int n, int k){
    // normalise if k>n
    k = k % n;

    // sort first k element
    int temp[k];
    for(int i=0; i<k; i++){
        temp[i] = arr[i];
    }

    // shift(copying) the rem. element to left
    for(int i=k; i<n; i++){
        arr[i-k] = arr[i];
    }

    // place the sorted element at the end
    for(int i=0; i<k; i++){
        arr[n-k+i] = temp[i];
    }
}

void leftR(vector<int>& arr, int k){
    int n = arr.size();

    // store the first k element
    vector<int> temp(arr.begin(), arr.begin()+k);

    // shift the rem. element to left
    for(int i=k; i<n; i++){
        arr[i-k] = arr[i];
    }

    // copy temp[] elements back to the end
    for(int i=0; i<k; i++){
        arr[n-k+i] = temp[i];
    }
}

// optimal solution
void leftRotateOpt(int arr[], int n, int k) {
    k = k % n;
    reverse(arr, arr+k); // reverse the first k elements
    reverse(arr+k, arr+n); // reverse reamining n-k elements
    reverse(arr, arr+n); // reverse the whole array


}



int main() {

    vector<int> arr = {1,2,3,4,5};
    int k = 3;
    leftR(arr, k);

    for(int num : arr){
        cout << num << " ";
    }








/*
tc: O(n) and extra space of O(1)
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int temp1 = arr[0];
    int temp2 = arr[1];

    for(int i=2; i<n; i++){
        arr[i-2] = arr[i];
    }
    arr[n-1] = temp2;
    arr[n-2] = temp1;

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    */



    return 0;
}