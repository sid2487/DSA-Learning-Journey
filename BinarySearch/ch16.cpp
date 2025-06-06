//QS: search in row wise and cloumn wise in sorted array(n*m)
// sorted row wise and column wise then go with BS
// start with i=0, and j=m-1 and then compare then decide where to go row or column depending upon the comparison.
// tc: O(n+m)

#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(int matrix[][4], int n, int m, int target){
    int i = 0; // start from top row 
    int j = m-1; // start from last column

    // can also write (i>=0 && i<n && j>=0 && j<n) but not required bcoz i will never be negative since we always increase it and j<m bcoz j will never exceed m-1 since always decresing.
    while(i<n && j>=0){ 
        if(matrix[i][j] == target){
            cout << "Found at position: (" << i << ", " << j << ")" << endl;
            return true;
        } else if(matrix[i][j] > target){
            j--; // move right
        } else {
            i++; // move down
        }
    }

    cout << "Element not FOund." << endl;
    return false;

}

int main(){

    int matrix[4][4] = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50}};

    int target = 29;
    searchMatrix(matrix, 4, 4, target);

    return 0;

    
}
