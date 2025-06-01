#include <bits/stdc++.h>
using namespace std;

// give the index of first occurence of the given target
int firstOccurence(int arr[], int n, int target){
    int start = 0;
    int end = n-1;
    int res = -1;

    while(start <= end){
        int mid = start + (end -start)/2;

        if(target == arr[mid]){
            res = mid;
            end = mid - 1;
        }
        else if(target < arr[mid]){
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return res;
}

int lastOccurence(int arr[], int n, int target){
    int start = 0;
    int end = n-1;
    int res = -1;

    while(start <= end){
        int mid = start + (end - start)/2;

        if(target == arr[mid]){
            res = mid;
            start = mid + 1;
        } else if(target < arr[mid]){
            end = mid - 1;
        } else {
            start = mid +1;
        }
    }
    return res;
}

int main() {

    int arr[] = {2,4,8,8,9,10};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << firstOccurence(arr, n, 8) << endl;
    cout << lastOccurence(arr, n, 8) << endl;

}