// missing numbers(n-1 no's are given if value is n and you have to find the missing no in between them)
// for the brutforce: tc: O(n^2) in the worst case and sc: (1)
#include<bits/stdc++.h>
using namespace std;


int main() {



int arr[] = {1,2,3,5}; 
int n = sizeof(arr)/sizeof(arr[0]);

/*
// brut

for(int i=1; i<=n; i++){
bool flag = 0;
for(int j=0; j<n; j++){
    if(arr[j] == i){
        flag = 1;
        break;
    }
}
if(flag==0){
    cout << "missing no" << i;
}
}
*/

// better by hashing: tc: O(2n) ans sc: 
// bool hash[n + 2] = {0};
vector<bool> hash(n + 2, false); // hash[0] to hash[n+1]

for (int i = 0; i < n; i++)
{ //  loop should go till i < n
    if (arr[i] > 0 && arr[i] <= n + 1)
    {
        hash[arr[i]] = true;
    }
}

for (int i = 1; i <= n + 1; i++)
{ // check up to n+1 for missing number
    if (hash[i] == false)
    {
        cout << "Missing number: " << i << endl;
        break; // stop at the first missing one
    }
}

return 0;
}