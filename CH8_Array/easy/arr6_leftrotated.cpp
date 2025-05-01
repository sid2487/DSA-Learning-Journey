// left rotated by 1 place tc: O(n) sc:O(n)
#include<bits/stdc++.h>
using namespace std;

void leftRotated(vector<int>& arr){
    int temp = arr[0];
    for(int i=1; i<arr.size(); i++){
        arr[i-1] = arr[i];
    }
    arr[arr.size()-1] = temp;

    
}

int main(){

    vector<int> arr = {1,2,3,4};
    leftRotated(arr);

    for (int x : arr) cout << x << " ";

    return 0;
}