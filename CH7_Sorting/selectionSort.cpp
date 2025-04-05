#include<bits/stdc++.h>
using namespace std;

// selection sort(TC= O(n^2) in best, average and worst case.)

// Find the minimum in the unsorted part and place it at the correct position.

/*
Logic: Find the smallest element and move it to the front. Repeat for the rest.

Example: [4, 2, 5, 1]
Step 1: Find 1 → swap with 4 → [1, 2, 5, 4]
Step 2: 2 is already in place
Step 3: Find 4 → swap with 5 → [1, 2, 4, 5]
*/

void selection_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++){
        int mini = i;
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[mini]){
                mini = j;
            }
        }
        // swap
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}

int main() {

    int n;
    cout << "Enter the length of the array: ";
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    selection_sort(arr, n);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }


    return 0;
}
