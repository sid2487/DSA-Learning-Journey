//QS: find an element in the rotated sorted array.

// first find the min element index -> we get two sorted array, one left to min element and other min to right -> apply bs on both the half -> one gives -1 and other gives searched elemnt index.

#include <bits/stdc++.h>
using namespace std;

// find min element
int findMinElement(vector<int> &arr){
    int n = arr.size();
    int start = 0;
    int end = n-1;

    while(start <= end){
        if(arr[start] <= arr[end]) return start;

        int mid = start + (end-start)/2;

        int next = (mid+1)%n;
        int prev = (mid+n-1)%n;

        if(arr[mid] <= arr[next] && arr[mid] <= arr[prev]){
            return mid;
        }

        else if (arr[start] <= arr[mid]){
            start = mid+1;
        }
        else {
            end = mid-1;
        }

    }
    return -1;
}

int binarySearch(vector<int> &arr, int start, int end, int target){

    while(start <= end){
        int mid = start + (end - start)/2;
        if(arr[mid] == target){
            return mid;
        } else if(arr[mid] < target){
            start = mid+1;
        } else {
            end = mid-1;
        }
    }
    return -1;
}




int findElement(vector<int> &arr, int target){
    int n = arr.size();

    int minIndex = findMinElement(arr);

    // search in left half
    int leftSearch = binarySearch(arr, 0, minIndex-1, target);
    int rightSearch = binarySearch(arr, minIndex+1, n-1, target);

    if((leftSearch) == -1){
        return rightSearch;
    } else {
        return leftSearch;
    }

//    return (leftSearch == -1) ?  rightSearch : leftSearch;
}

int main() {

    vector<int> arr = {11, 12, 15, 18, 2, 5, 6, 8};

    cout << findElement(arr, 5) << endl;

    return 0;
}