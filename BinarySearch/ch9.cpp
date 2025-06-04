//QS: find the index of the  floor of an given element in the sorted array
// find floor of 5: greatest element in the array smaller than 5

// EX: arr = [1, 2, 8, 10, 11, 12, 19] and target= 5
// o/p: 1 (bcoz floor of 5 is 2 which is lowest at index 1)

#include <bits/stdc++.h>
using namespace std;

int floorElementIndex(vector<int> &arr, int target){
    int n = arr.size();
    int start = 0;
    int end = n-1;
    int ans;
    while(start <= end){

        int mid = start + (end-start)/2;
        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] <= target){
            ans = mid; // there is a possible candidatee here
            start = mid+1;
        }
        else if(arr[mid] >= target){
            end = mid-1;
        }
    }
    return ans;
}

int main(){

    vector <int> arr = {1, 2, 8, 10, 11, 12, 19};
    cout << floorElementIndex(arr, 9) << endl;


    return 0;
}




