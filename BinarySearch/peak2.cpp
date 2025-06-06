#include<bits/stdc++.h>
using namespace std;

// arr = [ 1, 3, 7, 6, 6, 6, 4, 3, 2, 1 ] // here array is not strictly increasing or decreasing

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
        else
        {
            // You're in the ascending part → peak must be to the right
            start = mid + 1;
        }
    }

    return start; // or end (they are same)
}

int main(){



    return 0;
}
