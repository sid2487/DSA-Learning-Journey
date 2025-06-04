//QS: no of times a sorted array is rotated

// no of rotation = index of min element

#include <bits/stdc++.h>
using namespace std;

int countRotation(vector<int> &arr){
    int n = arr.size();
    int start = 0;
    int end = n-1;

    while(start <= end){

        // if already sorted completly, return start
        if(arr[start] <= arr[end]) return start;

        int mid = start + (end - start)/2;

        int next = (mid+1) % n;
        int prev = (mid+n-1)%n;

        if(arr[mid] <= arr[next] && arr[mid] <= arr[prev]){
            return mid;
        }

        // now if not the above case then decide where to go
        else if(arr[start] <= arr[mid]) {
            // left sorted, go in right
            start = mid + 1;
        } else{
            // right sorted(arr[mid] <= arr[end]), go in left
            end = mid - 1;
        }
    }
    return -1;
}

int main(){

    vector<int> arr = {11, 12, 15, 18, 2, 5, 6, 8};
    
    cout << countRotation(arr) << endl;

    return 0;
}
