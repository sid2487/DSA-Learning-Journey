#include<bits/stdc++.h>
using namespace std;
// to bring the pivot to the correct position
int partitionIndex(vector<int>& arr, int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;

    while(i<j){
        while(arr[i] <= pivot && i <= high-1){
            i++;
        }

        while(arr[j] > pivot && j >= low+1){
            j--;
        }

        // if both arr[i] > pivot and arr[j] <= pivot then swap
        if(i<j){
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }
    }
    // place pivot in its correct position
    swap(arr[low], arr[j]);
    return j;
}

// recursive function

    void qS(vector<int> &arr, int low, int high)
{
    if(low < high) {
        int pIndex = partitionIndex(arr, low, high);
        qS(arr, low, pIndex-1);
        qS(arr, pIndex+1, high);
    }
}

// calling  function

vector<int> quickSort(vector<int> arr){
    qS(arr, 0, arr.size()-1);
    return arr;
}

int main() {

    int n;
    cout << "Enter the n: ";
    cin >> n;

    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

   arr =  quickSort(arr);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }



    return 0;
}