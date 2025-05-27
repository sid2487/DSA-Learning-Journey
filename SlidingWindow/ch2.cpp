#include <bits/stdc++.h>
using namespace std;

// First negative Integer in every window of size k: har window size ke liye ek o/p print krna hai , if negative no found then print otherwise print zero, so suppose if size of array is 8 and window size is 3 then total no o/p will be size-k+1 = 6 in this case.

// brut: i=0 and j=i se start kro and window size tak jao which is j+k and then check kr lo ki har window me pahela negative and print kr do.
// but this repeatative and thats why we need better approach

// tc: O(n)
// sc: Stores at most n - k + 1 entries ⇒ O(n) (in worst case, if k = 1) and At most, it contains k negative numbers (worst case: all elements in a window are negative) so final sc: O(n) + O(k) = O(n)

vector<int> firstNegativeInteger(vector<int> &arr, int k) {
    int n = arr.size();
    int i = 0, j=0;
    list<int> l;
    vector <int> v;
    
    while(j<n){
        // step1: add to the list if current element is negative
        if(arr[j] < 0){
            l.push_back(arr[j]);
        }

        // step2: check the window size
        if((j-i+1) < k){
            j++;
        } else if((j-i+1) == k){
            // step3: store the answer from calculation
            if(l.empty()){
                v.push_back(0);
            } else{
                v.push_back(l.front()); // l.front() gets the first element of the container and v.push_back() adds that value to the end of the vector.
            }

         // step4: slide the window
         if(!l.empty() && arr[i] == l.front()){
            l.pop_front();
         }
         i++;
         j++;   
        }
    }

    return v;
}

int main(){

    vector<int> arr = {12, -1, -7, 8, -15, 30, 16, 28};
    vector<int> ans = firstNegativeInteger(arr, 3);
    
    for(int x : ans) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
} 