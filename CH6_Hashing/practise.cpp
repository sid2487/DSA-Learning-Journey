#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout << "Enter the length of array: ";
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    // precomputing 
    int hash[100] = {0};
    for(int i=0; i<n; i++){
        hash[arr[i]]++;
    }

    int q;
    cout <<"Enter the query: ";
    cin >> q;

    while(q--){
        int number;
        cout << "Enter the number you want to check: ";
        cin >> number;

        cout << "The counting of the number is: " << hash[number] << endl;
        
    }



    return 0;
}