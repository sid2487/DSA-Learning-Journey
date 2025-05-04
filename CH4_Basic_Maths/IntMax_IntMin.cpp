#include <bits/stdc++.h>
using namespace std;

// always remember
// if find min then initialize with INT_MAX(so that any no will be smaller)
// if find max then initialize with INT_MIN(so that any no will be greater)

// cout << INT_MAX << endl; // 2147483647
// cout << INT_MIN << endl; // -2147483648

int main() {

    // Let’s say you want to find the smallest number in an array:

    int arr[] = {5, 3, 9, 1, 6};
    int minVal = INT_MAX; // initialize with a vey big no

    for(int i=0; i<5; i++){
        if(arr[i] < minVal){
            minVal = arr[i];
        }
    }
    cout << minVal << endl;

    // Finding the maximum value in an array

    int arr[] = {-5, -2, -8};
    int maxVal = INT_MIN;

    for(int i=0; i<3; i++){
        if(arr[i] > maxVal){
            arr[i] = maxVal;
        }
    }

    cout << maxVal << endl;
    return 0;
}