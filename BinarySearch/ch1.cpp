#include<bits/stdc++.h>
using namespace std;

// find the index of a given no in the given sorted array in increasing order

int findNumberBinarySearch(vector<int> &arr, int element){
    int n = arr.size();
    int start = 0; int end = n-1;
    while(start<=end){
        // int mid = (start + end)/2;  // chances of overflow
        int mid = start + (end - start)/2;
        if(element == arr[mid]){
            return mid;
        } else if(element < arr[mid]){
            end = mid - 1;
        } else if(element > arr[mid]){
            start = mid + 1;
        }
    }
    return -1;
}

int main(){

    vector <int> arr = {1,2,5,8,9};

    cout << findNumberBinarySearch(arr, 5);
    return 0;
}
