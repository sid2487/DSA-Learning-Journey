// count the no of 0s, 1s and 2s

#include<bits/stdc++.h>
using namespace std;

void sortArrayAndCount(vector<int>& arr, int n, int& count0, int& count1, int& count2){
    int low = 0, mid = 0, high = n-1;
    count0 = 0;
    count1 = 0;
    count2 = 0;

    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[low], arr[mid]);
            low++;
            mid++;
            count0++;
        } else if(arr[mid] == 1){
            mid++;
            count1++;
        } else {
            swap(arr[mid], arr[high]);
                high--;
                count2++;
        }
    }
}

int main() {

    vector<int> arr = {2,0,2,1,1,0};
    int count0, count1, count2;

    sortArrayAndCount(arr, 6, count0, count1, count2);

    for(int num : arr){
        cout << num << " ";
    }
    cout << endl ;

    cout << "count of 0s: " << count0 << endl;
    cout << "count of 1s: " << count1 << endl;
    cout << "count of 2s: " << count2 << endl;


    return 0;
}