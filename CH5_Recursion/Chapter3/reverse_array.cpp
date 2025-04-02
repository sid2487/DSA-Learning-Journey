#include <bits/stdc++.h>
using namespace std;

// Reverse an array using recursion
void f(int i, int arr[], int n){
    if(i >= n/2) return;
    swap(arr[i], arr[n-i-1]);
    f(i+1, arr, n);
}

// iterative approach
void reverseArray(int arr[], int n){
    for(int i=0; i<n/2; i++){
        swap(arr[i], arr[n-i-1]);
    }
}

// another which works every where
void reverseArray2(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n / 2; i++)
    {
        swap(arr[i], arr[n - i - 1]);
    }
}

int main(){

    cout << "Entert the n:" << endl;
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];
    // f(0, arr, n);
    reverseArray(arr, n);
    for(int i=0; i<n; i++) cout << arr[i] << " ";




    return 0;
} 