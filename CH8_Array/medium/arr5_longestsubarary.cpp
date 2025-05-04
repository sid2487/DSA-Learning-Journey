// longest subarray with sum k(only positives)
#include <bits/stdc++.h>
using namespace std;

// brut solution(rn the tc is O(n^3) but if we remover the k loop and add the s = s + a[j] then brut can be optimised to O(n^2))
int brutSol(vector<int> &arr, int n, int key ){
    int length = 0;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int sum = 0;
            for(int k=i; k<j; k++){
                sum += arr[k];
                if(sum = key) length = max(length, j-i+1);
            }
        }
    }
    return length;
}

int main() {




    return 0;
}