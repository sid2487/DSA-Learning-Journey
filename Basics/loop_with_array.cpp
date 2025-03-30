#include <bits/stdc++.h>
using namespace std;

// when you pass an array inside the function,  it always goes with the reference

// arrays in C++ are handled differently, and the & isn’t needed for pass by reference with arrays—they’re automatically passed by reference (sort of).

// In C++, when you pass an array to a function (e.g., int arr[]), it’s passed as a pointer to its first element, not a copy, so changes affect the original array—no & required.

void doSomething(int arr[], int n){
    arr[0] += 100;
    cout << "Value inside the function " << arr[0] << endl;
}


int main(){

    int n = 5;
    int arr[n];
    for(int i =0; i<n; i++){
        cin >> arr[i];
    }

    doSomething(arr, n);
    cout << "Value inside the int main: " << arr[0] << endl;

    





    return 0;
}

