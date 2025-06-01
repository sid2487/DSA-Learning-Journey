#include <bits/stdc++.h>
using namespace std;

// if its not given that the sorted array is in ascending or descending order

int binarySearch(int arr[], int n, int target){
    int start = 0;
    int end = n-1;

    bool isAsc = arr[start] < arr[end];

    while(start <= end){
        int mid = start + (end-start)/2;

        if(arr[mid] == target) return mid;

        if(isAsc){
            if(target < arr[mid]){
                end = mid-1;
            } else start = mid + 1;
        } else {
            if(target < arr[mid]){
                start = mid+1;
            } else{
                end = mid-1;
            }
        }
    }
    return -1;
}

int main(){

    int arr1[] = {2, 4, 6, 8, 10, 12, 14};   // Ascending
    int arr2[] = {20, 17, 15, 13, 11, 9, 5}; // Descending

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    int target = 10;

    int result1 = binarySearch(arr1, n1, target);
    int result2 = binarySearch(arr2, n2, target);

    cout << "Result in arr1: " << result1 << endl;
    cout << "Result in arr2: " << result2 << endl;

    return 0;

    return 0;
}