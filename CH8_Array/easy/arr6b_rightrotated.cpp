#include<bits/stdc++.h>
using namespace std;

// tc: O(n+k) and sc: extra space O(k)

void rotateRight(vector<int>& arr, int k){
    int n = arr.size();
    k = k%n;

    if(k==0) return;

    vector<int> temp(arr.end()-k, arr.end());

    for(int i=n-k-1; i>=0; i--){
        arr[i+k] = arr[i];
    }

    for(int i=0; i<k; i++){
        arr[i] = temp[i];
    }
}

// optimal solution(tc: O(n) and sc: O(1))
void leftRotate(int arr[], int n, int k){
    reverse(arr, arr+n);
    reverse(arr, arr + k); // reverse from index 0 to k-1
    reverse(arr + k, arr + n); // reverse from index k to n-1
}

int main() {

    vector<int> arr = {1,2,3,4,5};
    int k = 2;

    rotateRight(arr, k);
    for(int nums : arr){
        cout << nums << " ";
    }

    

    return 0;
}