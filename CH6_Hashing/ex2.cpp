
#include <bits/stdc++.h>
using namespace std;

// If you want to return a single computed result (e.g., sum, max frequency, count of distinct elements).

int frequencyCount(vector<int> &arr)
{
    unordered_map<int, int> freq;
    for (int num : arr)
    {
        freq[num]++;
    }
    return freq.size(); // Returns count of distinct numbers
}

// If you want to return a new list of frequencies or a processed version of arr.

vector<int> frequencyCount2(vector<int> &arr)
{
    vector<int> freq(101, 0); // Assuming numbers are from 0-100
    for (int num : arr)
    {
        freq[num]++;
    }
    return freq; // Returns frequency array
}

int main(){


    

    
}

