#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout << "Enter the length of the array: " << endl;
    cin >> n;

    int arr[n];
    cout << "Enter elements of the array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    // precompute the frequency
    int hash[100] = {0}; // max upto pow(10, 7); if declare globally and 6 if here and above that array can't handle so we use stl.
    for(int i=0; i<n; i++){
        hash[arr[i]]++;
    }

    // answer queries efficiently
    int q;
    cout << "Enter number of queries: ";
    cin >> q;

    while(q--){
        int x;
        cout << "Enter number to check the frequency: ";
        cin >> x;
        cout << "The frequency of " << x << " " << "is: " << hash[x]<< endl;
    }

    // while(q>0){
    //     // loop body(another way to write)
    //     q--;
    // }

    return 0;



}