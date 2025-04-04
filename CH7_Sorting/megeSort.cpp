#include <bits/stdc++.h>
using namespace std;

// Merge Sort: Divide and Merge(TC: [ O(n*log(n base2)) ])

// merge two sorted half
void merge(vector<int>& arr, int low, int mid, int high){
    vector<int> temp;
    // [low....mid]
    // [mid....high]
    int left = low;
    int right = mid+1;
    while(left<=mid && right<=high){
        if(arr[left] < arr[right]){
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    } 

    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }

    // now push temp into main array
    for(int i=low; i<=high; i++){
        arr[i] = temp[i-low];
    }
}

// merge sort recursive function
void mS(vector<int>& arr, int low, int high){
    if(low == high) return;
    int mid = (low + high)/2;
    mS(arr, low, mid);
    mS(arr, mid+1, high);
    merge(arr, low, mid, high);

}

// merge sort wrapper
void mergeSort(vector<int>& arr, int n){
    mS(arr, 0, n-1);
}

int main() {

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    mergeSort(arr, n);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }



    return 0;
}

/*
📊 Time Complexity Patterns:

- Single loop → O(n)
- Nested loops → O(n^2)
- Binary Search / Log steps → O(log n)
- Sort + Loop → O(n log n)
- Recursion (2 calls) → O(2^n)
- Merge Sort / Quick Sort (avg) → O(n log n)
*/
