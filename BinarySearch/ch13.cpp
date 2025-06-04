//QS: fint the Peak Element and return its index in an unsorted array.  
//  A peak element is an element that is strictly greater than its neighbors.
// For corner elements, we consider only one neighbor.
// The array may contain multiple peak elements, in which case return the index of any one of them.

#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

int peakElement(vector<int> &arr)
{
    int n = arr.size();
    int start = 0, end = n - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        // Check if mid is a peak
        bool leftOk = (mid == 0) || (arr[mid] > arr[mid - 1]);
        bool rightOk = (mid == n - 1) || (arr[mid] > arr[mid + 1]);

        if (leftOk && rightOk)
        {
            return mid;
        }
        else if (mid > 0 && arr[mid - 1] > arr[mid])
        {
            end = mid - 1; // move to left half
        }
        else
        {
            start = mid + 1; // move to right half
        }
    }

    return -1; // just in case
}

int main()
{
    vector<int> arr = {1, 3, 20, 4, 1, 0};
    cout << "Peak element index: " << peakElement(arr) << endl;
    return 0;
}