// here sorting and then traversing will take O(nlogn + n) which is brutforce
// but better have tc: O(2n)

#include<bits/stdc++.h>
using namespace std;

int main(){

    /*
    // better solution
    
    int arr[] = {4,5,8,7,10,9};
    int n = sizeof(arr) / sizeof(arr[0]);

    
    int largestNo = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i] > largestNo){
            largestNo = arr[i];
        }
    }

    int sLargest = -1;
    for(int i=0; i<n; i++){
        if(arr[i] > sLargest && arr[i] != largestNo){
            sLargest = arr[i];
        }
    }

    cout << sLargest << endl;
*/


    return 0;
}