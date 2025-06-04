//QS: Find position of an element in an infinite array.

// start=0 and end=1 and then go till target bada ho end se, and increase end by end*2, and start=end....once you get a definite array, apply BS.

#include<bits/stdc++.h>
using namespace std;

int infinteArray(vector<int> &arr, int target){
    int start = 0, end = 1;

    while(end < arr.size() && target > arr[end]){
        start = end;
        end = end * 2;

        // prevent going out of bounds
        if(end >= arr.size()){
            end = arr.size()-1;
            break;
        }
    }

    return binarySearch(arr, start, end, target);
}

int binarySearch(vector<int> &arr, int start, int end, int target){
    

    while(end >= start){
        int mid = start + (end - start)/2;

        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] > target){
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return -1;
}

int main(){

    // vector<int> arr = {1, 2, 3, 4, 5, 6, ......};


    return 0;
}