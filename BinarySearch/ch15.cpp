//QS: Search in Bitonic array
// first find the peak element then it divides the main array in two array first from (0 to peakelement-1) and other is from (peak to n), then apply BS in both the arrays bcoz both are sorted one in asce order and oher is in desc order.

#include <bits/stdc++.h>
using namespace std;

// Binary Search (ascending or descending based on flag)
int binaryAesc(vector <int> &arr, int start, int end, int target){
    while(start <= end){
        int mid = start + (end - start)/2;
        if(arr[mid] == target) return mid;
        else if(arr[mid] < target) start = mid + 1;
        else end = mid - 1; 
    }

    return -1;
}

int binaryDesc(vector<int> &arr, int start, int end, int target)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            start = mid + 1;
        else
            end = mid - 1;
    }

    return -1;
}

int peakElement(vector<int> &arr){
    int n = arr.size();
    int start = 0, end = n - 1;
    while(start <= end){
        int mid = start + (end - start)/2;

        bool leftOk = (mid == 0) || (arr[mid] > arr[mid-1]);
        bool rightOk = (mid == n-1) || (arr[mid] > arr[mid+1]);

        if(leftOk && rightOk){
            return mid;
        } else if(mid > 0 && arr[mid-1] > arr[mid]){
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return -1;
}

int bitonicSearch(vector<int> &arr, int target){
    int peakIndex = peakElement(arr);

    int left = binaryAesc(arr, 0, peakIndex, target);
    if (left != -1)
        return left;

    int right = binaryDesc(arr, peakIndex + 1, arr.size() - 1, target);
    return right;
}

int main()
{
    

    return 0;
}
