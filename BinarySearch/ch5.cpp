// i/p: sorted rotated array.
// o/p: no of rotation(no of time it was rotated)

// no of times array rotated will be equal to the index of the min element.
// one half is sorted and other is unsorted.
//  find mid then compare it with its prev and next element, if smaller than both then its the lowest element and its index is the no of rotation.
// if arr[start] <= arr[mid] then go in right(bcoz left one is sorted and right one is unsorted)
// if arr[mid] <= arr[end] then go in left(bcoz right one is sorted and left is unsorted)

#include <bits/stdc++.h>
using namespace std;

int countRotation(int arr[], int n){
    int start = 0;
    int end = n-1;
    while(start <= end){
        int mid = start + (end - start)/2;

        int next = (mid+1)%n;
        int prev = (mid+n-1)%n;
        if(arr[mid] <= arr[prev] && arr[mid] <= arr[next]) return mid;

        if(arr[start] <= arr[mid]){
            start = mid+1; // go in right
        } else if(arr[mid] <= arr[end]){
            end = mid-1; // go in left
        }
    }

    return 0; // return 0 if array is not rotated
}


int main(){

    int arr[] = {8, 9, 10, 2, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << countRotation(arr, n) << endl;

    return 0;
}