#include<iostream>
using namespace std;

// Print the sum of first n numbers
int parametrised(int i, int sum){
    if(i<1){
        return sum;
    }
    return parametrised(i-1, sum+i);
}

int main(){

    int n;
    cout << "Enter the n:" << endl;
    cin >> n;

    cout << "The sum of first n numbers are:" << parametrised(n, 0) << endl;


    return 0;
}