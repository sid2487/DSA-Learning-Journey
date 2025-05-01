// for unsorted array

#include<bits/stdc++.h>
using namespace std;

vector<int> removeDuplicate(vector<int> &arr)
{
    set<int> st;        // Set to store unique elements
    vector<int> result; // To store the final result

    for (int num : arr)
    {
        //  st.end() denotes "Not found" marker in the set
        if (st.find(num) == st.end()) // 	num is not in the set
        {
            result.push_back(num); // If not seen before, add to result
            st.insert(num);        // Mark as seen
        }
    }

    return result;
}
