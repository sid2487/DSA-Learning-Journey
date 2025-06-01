#include<bits/stdc++.h>
using namespace std;

// rearrange array elements by sign in alterante positive and negative and array has even length i.e equal no of positive and negative
// tc: O(2n) but sc: O( n) so its a brut solution
vector<int> alternateElements(vector<int> &arr){
    int n = arr.size();
    vector<int> positive;
    vector<int> negative;
    for(int i=0; i<n/2; i++){
        positive.push_back(arr[2*i]);
        negative.push_back(arr[(2*i) + 1]);
    }

    vector<int> result;
    int i = 0, j = 0;
    bool turnPositive = true;

    // Alternate between positive and negative
    while (i < positive.size() && j < negative.size())
    {
        if (turnPositive)
            result.push_back(positive[i++]);
        else
            result.push_back(negative[j++]);
        turnPositive = !turnPositive;
    }

    // Add remaining positives
    while (i < positive.size())
        result.push_back(positive[i++]);

    // Add remaining negatives
    while (j < negative.size())
        result.push_back(negative[j++]);

    return result;
}

vector<int> betterSol(vector <int> &arr){
    int n = arr.size();
    vector<int> ans(n, 0);
    int posIndex = 0, negIndex = 1;
    for(int i=0; i<n; i++){
        if(arr[i] < 0){
            ans[negIndex] = arr[i];
            negIndex += 2;
        } else {
            ans[posIndex] = arr[i];
            posIndex += 2;
        }
    }
    return ans;
}
int main() {




    return 0;
}