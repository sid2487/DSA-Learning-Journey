#include <bits/stdc++.h>
using namespace std;

int main(){

    vector <int> arr = {1,1,5,6,8,9};
    bool isSorted = true;

    for(int i=0; i<arr.size(); i++){
        if(arr[i] < arr[i-1]){
            isSorted = false;
            break;
        }
    }

    if(isSorted) {
        cout << "Sorted" << endl;
    } else{
        cout << "Not sorted" <<endl;
    }
}