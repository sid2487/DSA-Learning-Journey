#include<bits/stdc++.h>
using namespace std;

// arr = [ 1, 3, 7, 6, 6, 6, 4, 3, 2, 1 ] // here array is not strictly increasing or decreasing
// and this method returns any one peak. 

int peakElement(vector<int> &arr)
{
    int n = arr.size();
    int start = 0, end = n - 1;

    while (start < end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] > arr[mid + 1])
        {
            // You're in the descending part → peak must be at mid or to the left
            end = mid;
        }
        else if(arr[mid] <= arr[mid+1])
        {
            // You're in the ascending part → peak must be to the right
            start = mid + 1;
        }
    }

    return start; // or end (they are same)
}

// but if you want to find the index left most peak
int findFirstPeak(vector<int> & arr){
    int n = arr.size();

    if(n==1) return 0;
    if(arr[0] > arr[1]) return 0;
    if(arr[n-1] > arr[n-2]) return n-1;

    for(int i=1; i<n-1; i++){
        if(arr[i] > arr[i-1] && arr[i] > arr[i+1]){
            return i;
        }
    }
    return -1;
}

int main(){

    vector<int> arr = {1,3,7,6,6,6,4,3,2,1};
    cout << "Peak Element: " << peakElement(arr) << endl;
    cout << "Peak Element: " << findFirstPeak(arr) << endl;

    return 0;
}
