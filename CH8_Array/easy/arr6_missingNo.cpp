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

// better by hashing: tc: O(2n) ans sc: O(n)
// bool hash[n + 2] = {0};
// vector<bool> hash(n + 2, false); // hash[0] to hash[n+1]

// for (int i = 0; i < n; i++)
// { //  loop should go till i < n
//     if (arr[i] > 0 && arr[i] <= n + 1)
//     {
//         hash[arr[i]] = true;
//     }
// }

// for (int i = 1; i <= n + 1; i++)
// { // check up to n+1 for missing number
//     if (hash[i] == false)
//     {
//         cout << "Missing number: " << i << endl;
//         break; // stop at the first missing one
//     }
// }

// optimal sol (tc: O(n) and O(1)): (tc: O(n) and sc: O(1))
int sum = (n*(n+1))/2;
int s2 = 0;
for(int i=0; i<n-1; i++){
    s2 += arr[i];
}
// cout<<(sum-s2)<< endl;

// optimal using xor 

// for(int i=1; i<n; i++){
//     xor1 = xor1 ^ i;
// }

int arr[] = {1, 2, 3, 5};
int n = sizeof(arr) / sizeof(arr[0]);
int xor1 = 0;
int xor2 = 0;
for(int i=0; i<n-1; i++){
    xor2 = xor2^arr[i];
    xor1 = xor1^(i+1); // it xored till 4 but last is still not xored
}
xor1 = xor1 ^ n;
int missing = xor1 ^ xor2;
cout << missing << endl;

return 0;
}  