// move zeros to the last
#include<bits/stdc++.h>
using namespace std;

// brtuforce : tc: O(2n) and extra space: O(x) which can move upto O(n)
vector<int> moveZeros(int n, vector<int>& a){
    vector<int> temp;
    for(int i=0; i<n; i++){
        if(a[i] != 0){
            temp.push_back(a[i]);
        }
    }

    int nz = temp.size();
    for(int i=0; i<nz; i++) {
        a[i] = temp[i];
    }

    for(int i=nz; i<n; i++){
        a[i] = 0;
    }
    return a;
}

// optimal can be done using two pointers: tc: O(n) and sc: O(1);
vector<int> moveZ(int n, vector<int>& arr){
    int j = -1;
    for(int i=0; i<n; i++){
        if(arr[i] == 0) {
            j=i;
            break;
        }
    }

    if(j == -1) return;

    for(int i=j+1; i<n; i++){
        if(arr[i] != 0){
            swap(arr[i], arr[j]);
            j++;
        }
    }
    return arr;
}

void moveZ2(vector<int>& arr){
    int n = arr.size();
    int j = 0;
    for(int i=0; i<n; i++){
        if(arr[i] != 0){
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main() {

    vector<int> arr = {0,2,0,5,4,0,6,0};
    int n = 8;
    // moveZeros(n, a);
    moveZ(n, arr);

    for(int num : arr){
        cout << num << " ";
    }




    return 0;
}