//QS: Find the element in the array that has the minimum absolute difference with the given key. If there are multiple such elements, return the one that appears first in the array.
// if key is in the array then we have to return the key itself bcoz that will give the min. -> then the problem will convet in simple BS.

// if key is not present then the elements, just nearest either left or right will give the minimum.
// apply the BS and and it will end up positioning of start and end to just the nearest neighbours of the key and end the loop. then at the end simply find the abs(arr[low]-key) and arr([high]-key) and return the element whichever is minimum.

#include <bits/stdc++.h>
using namespace std;

int minDiffKey(vector<int> &arr, int target){
    int n = arr.size();
    int start = 0, end = n-1;

    while(end >= start){
        int mid = start + (end-start)/2;

        if(arr[mid] == target){
            return arr[mid]; // bcoz target-target=0, which is minimum.
        } else if(arr[mid] > target){
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    // it is handling two edge cases: 
    if(start >= n) return arr[end]; // arr = [1, 3, 8, 10, 15]; and key=15
    if(end < 0) return arr[start]; // arr = [5, 10, 20]; key=1

    return (abs(arr[start] - target) < abs(arr[end] - target)) ? arr[start] : arr[end];
}

int main(){

    vector<int> arr = {1, 3, 8, 10, 15};
    int n = arr.size();

    cout << minDiffKey(arr, 12) << endl;

    return 0;
}
