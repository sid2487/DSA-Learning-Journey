//QS: Find max element in bitonic array(first monotonically increasing and monotonically decreasing )
// then this qs simply becomes qs of peak which contain only one peak element.

#include <bits/stdc++.h>
using namespace std;

int bitonicArray(vector<int> &arr){
    int n = arr.size();
    int start = 0, end = n-1;

    while(start <= end){
        int mid = start + (end-start)/2;

        bool leftOk = (mid == 0) || (arr[mid] > arr[mid-1]);
        bool rightOk = (mid == n-1) || (arr[mid] > arr[mid+1]);

        if(leftOk && rightOk){
            return mid;
        } else if(mid > 0 && arr[mid-1] > arr[mid]){
            end = mid-1;
        } else {
            start = mid + 1;
        }
    }

    return -1;
}

int main(){


    vector <int> arr = {1, 3, 20, 4, 1, 0};
    cout << "Max Element's Index in this bitonic array is : " << bitonicArray(arr) << endl;



    return 0;
}