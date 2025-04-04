#include <bits/stdc++.h>
using namespace std;
// insertion sort: always takes an element & place it in its correct order.
// TC: O(n^2) for average and worst case, and O(n) for the best case.

void insertion_sort(int arr[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;

            j--;
        }
    }
}

int main() {

    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int arr[n];
    cout << "Enter the element in array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    insertion_sort(arr, n);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }


    return 0;
}