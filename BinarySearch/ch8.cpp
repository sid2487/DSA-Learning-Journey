// You're given a nearly sorted(also called almost sorted, adjacent swap sorted) array, where an element at index i may be present at i, i-1, or i+1, given the condition that array has all distinct elements

#include <bits/stdc++.h>
using namespace std;

int nearlySorted(vector<int> &arr, int target){
    int n = arr.size();
    int start = 0;
    int end = n-1;
    
    while(start <= end){

        int mid = start + (end - start)/2;

        // if mid is the target
        if(arr[mid] == target){
            return mid;
        }
        // mid-1 can be the target
        else if(mid-1 >= start && arr[mid-1] == target ){
            return mid-1;
        } 
        // mid+1 can be the target
        else if(mid+1 <= end && arr[mid+1] == target){
            return mid+1;
        }

        // If target is less than arr[mid], move left
        if (target < arr[mid])
        {
            end = mid - 2;
        }
        // Else move right
        else
        {
            start = mid + 2;
        }
    }
    return -1;
}

int main(){

    vector<int> arr = {5, 10, 30, 20, 40};
    cout << nearlySorted(arr, 40) << endl;

    return 0;
}