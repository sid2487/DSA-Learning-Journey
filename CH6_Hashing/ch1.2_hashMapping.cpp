#include <bits/stdc++.h>
using namespace std;

// map stored all the values in sorted order

// **TC of map:
// in mapig, if you're storing or fetchig, tc= log(n) in all cases(best, average, worst).

// for unorderd map, it will also act in the similar way but tc= O(1) for best averarge cases, and for worst case, O(n), where n is the no of elements in the program.

// **first preference should be unorderd map, and if it gives time limit exceded(sometimes it gives O(n^2) but rare) then move to ordered map.

int main(){

    int n;
    cout << "Enter the n: " << endl;
    cin >> n;

    int arr[n];
    map<int, int> mpp;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        mpp[arr[i]]++;
    }

    // precompute(map takes key value pair, in key we store the index and in the value we store ocurrences). 
    // it can be done while taking the input.
    // map<int, int> mpp;
    // for(int i=0; i<n; i++){
    //     mpp[arr[i]]++;
    // }

    // iterate the map
    // for(auto it : mpp){
    //     cout << it.first << "-->>" << it.second << endl; 
    // }

    int q;
    cout << "Enter the query: ";
    cin >> q;

    while(q--){
        int number;
        cout << "Enter the number you want to check: ";
        cin >> number;

        // fetch
        cout << "The no of times "<< number << " " << "comes " << mpp[number] << endl;
    }

    return 0;
}