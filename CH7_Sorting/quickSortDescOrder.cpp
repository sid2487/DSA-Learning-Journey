#include<bits/stdc++.h>
using namespace std;

// for descending orderer just reverse the comparison logic in partitionIndex funciton:

int partitionIndex(vector<int>& arr, int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;

    while(i<j){
        while(arr[i] >= pivot && i <= high-1) i++;
        while(arr[j] < pivot && j >= low+1) j--;
        if(i<j) swap(arr[i], arr[j]);
    }
    // swap the pivot with the low
    swap(arr[low], arr[j]);
    return j;
}

    void
    qS(vector<int> &arr, int low, int high)
{
    if(low < high){
        int pIndex = partitionIndex(arr, low, high);
        qS(arr, low, pIndex-1);
        qS(arr, pIndex+1, high);
    }
}

int main() {

    int n;
    cout <<"Enter the value of n: ";
    cin >> n;

    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    qS(arr, 0, arr.size()-1);

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }




    return 0;
}