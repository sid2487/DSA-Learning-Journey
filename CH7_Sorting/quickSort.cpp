// it has also tc of O(nlog(n)) but it doesn't use any temp array therefore sc = O(1).

// step:1 pick a pivot(can be any element from the array) and place it in its correct place.
// step:2 smaller on the left,larger on the right.
// step:3 repeat the step1 and step2

#include<bits/stdc++.h>
using namespace std;

// find partitionIndex
int partitionIndex(vector<int>& arr, int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;

    while(i<j){
        while(arr[i] <= pivot && i <= high-1) i++;
        while(arr[j] > pivot && j >= low+1) j++;
        if(i<j) swap(arr[i], arr[j]); 
    }
    // swap arr[i] with arr[j] to move the pivot to the correct position
    swap(arr[low], arr[j]);
    return j;
}

    // recursive funciton
    void qS(vector<int> &arr, int low, int high)
{
    if(low < high){
        int pIndex = partitionIndex(arr, low, high);
        qS(arr, low, pIndex-1);
        qS(arr, pIndex+1, high);
    }
}

// wrapper function can be written in two ways:
// 1: with return(copy version) (you have to do the assignment)
vector<int> quickSort(vector<int> arr){
    qS(arr, 0, arr.size()-1);
    return arr;
}

// 2: referece version
void quickSort2(vector<int>& arr){
    qS(arr, 0, arr.size()-1);
}

int main() {
    vector<int> arr = {4,2,8,5,1};

    arr = quickSort(arr); // you have to assign it

    quickSort2(arr); // just call don't need to assign it

    // if you don't want wrapper, call directly
    qS(arr, 0, arr.size()-1);


    for(int i : arr) cout << i << " ";



    return 0;
}