#include<bits/stdc++.h>
using namespace std;

// always think from (brute -->> better -->> optimal solution)
// here brute sol is sorting in ascending order and then print the last no(tc: O(nlog(n)));
// but optimal tc: O(n) 

int main() {
    
    int arr[] = {3,1,7,10,5,9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int largestNo = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i] > largestNo){
            largestNo = arr[i];
        }
    }

    cout << largestNo << endl;

    
    return 0;
}