// for unsorted array

#include<bits/stdc++.h>
using namespace std;

vector<int> removeDuplicate(vector<int> &arr)
{
    set<int> st;        // Set to store unique elements
    vector<int> result; // To store the final result

    for (int num : arr)
    {
        if (st.find(num) == st.end())
        {
            result.push_back(num); // If not seen before, add to result
            st.insert(num);        // Mark as seen
        }
    }

    return result;
}
