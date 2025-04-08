#include <bits/stdc++.h>
using namespace std;
// insertion sort: always takes an element & place it in its correct order.
// TC: O(n^2) for average and worst case, and O(n) for the best case.

/*

Logic: Pick one element at a time and insert it into its correct position in the sorted part (left side).

Example: [4, 2, 5, 1]
start from second element(for comparing)
Step 1: Insert 2 before 4 → [2, 4, 5, 1]
Step 2: 5 is fine
Step 3: Insert 1 at the start → [1, 2, 4, 5]

think of how you sort playing cards in your hand. You take one card at a time and insert it into its correct position in the already sorted part of your hand.

*/
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