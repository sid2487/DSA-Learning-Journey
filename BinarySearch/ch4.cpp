#include <bits/stdc++.h>
using namespace std;

// count of given target in a sorted array

int firstOccurence(int arr[], int n, int target){
    int start = 0;
    int end = n-1;
    int res = -1;
    
    while(start <= end){
        int mid = start + (end - start)/2;

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

int lastOccurence(int arr[], int n, int target)
{
    int start = 0;
    int end = n - 1;
    int res = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (target == arr[mid])
        {
            res = mid;
            start = mid + 1;
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return res;
}

int countTarget(int arr[], int n, int target){
    int first = firstOccurence(arr, n, target);
    int last = lastOccurence(arr, n, target);

    if(first == -1 || last == -1) return 0;

    return last -first + 1;
}


int main(){

    int arr[] = {2, 4, 8, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << countTarget(arr, n, 8) << endl;

    return 0;
}