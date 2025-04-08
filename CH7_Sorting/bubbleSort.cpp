#include <bits/stdc++.h>
using namespace std;

// bubble sort: pushes maximum to the last by adjacent swaps. (TC: O(n^2) is worst and average compelxity and its O(n) for the best case)


/*

Logic: Keep swapping adjacent elements if they're in the wrong order. Largest bubbles up to the end in each pass.

Repeat passes until the array is sorted.

Example: [4, 2, 5, 1]
Pass 1:

4 > 2 → swap → [2, 4, 5, 1]

4 < 5 → no swap

5 > 1 → swap → [2, 4, 1, 5]

Pass 2:

2 < 4 → no swap

4 > 1 → swap → [2, 1, 4, 5]

Pass 3:

2 > 1 → swap → [1, 2, 4, 5]

*/

void bubble_sort(int arr[], int n){
    for(int i=n-1; i>=0; i--){
        int didSwap = 0;
        for(int j=0; j<=i-1; j++){
            if(arr[j] > arr[j+1]){  
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                didSwap = 1;
            }
        }
        if(didSwap == 0){
            break;
        }
    }
}

// another way(Repeatedly go through the list)
void bubbleSort(vector<int>& arr){
    int n = arr.size();
    bool swapped;

    for(int i=0; i<n-1; i++){
        swapped = false;
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                // swap
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                swapped = true;
            }
        }
        if(!swapped) break;
    }
}


int main() {

    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;

    int arr1[n];
    vector<int> arr(n);
    cout << "Enter the elements of array: " << endl;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    // bubble_sort(arr, n);
    bubbleSort(arr);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }



    return 0;
}