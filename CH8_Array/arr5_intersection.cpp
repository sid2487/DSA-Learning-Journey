#include <bits/stdc++.h>
using namespace std;
// Intersection of two sorted arrays
// brut: tc: O(n1*n2) and sc: O(n2)
vector<int> intersectionArray(vector<int> &a, int n, vector<int> &b, int m)
{
    vector<int> ans;
    vector<int> vis(m, 0); // to mark elements in b[] that are already matched

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i] == b[j] && vis[j] == 0)
            {
                ans.push_back(a[i]);
                vis[j] = 1; // mark b[j] as used
                break;
            }

            
            if (b[j] > a[i])
                break;
        }
    }

    return ans;
}

// optimal sol: using two pointers
vector<int> intersectionArr(vector<int>& a, int n, vector<int>& b, int m){
    int i = 0;
    int j = 0;
    vector<int> ans;
    while(i<n && j<m){
        if(a[i] < b[j]){
            i++;
        } else if(b[j] < a[i]){
            j++;
        } else {
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }
    return ans;
}

int main()
{
    vector<int> a1 = {1, 2, 2, 3, 4};
    vector<int> a2 = {2, 2, 3, 5};

    // vector<int> result = intersectionArray(a1, a1.size(), a2, a2.size());
    vector<int> result = intersectionArr(a1, a1.size(), a2, a2.size());

        for (int num : result)
    {
        cout << num << " ";
    }

    return 0;
}
