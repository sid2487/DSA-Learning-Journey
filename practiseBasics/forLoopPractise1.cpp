#include <bits/stdc++.h>
using namespace std;

// sum from (1-n)


// Using Funciton
int sumNumber(int n){
    int sum =0;
    for(int i=1; i<=n; i++){
        sum = sum+i;
    }
    return sum;
}

int main(){

    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;

    // Without Function

    // int sum=0;
    // for(int i=1; i<=n; i++){
    //     sum = sum + i;
    // }
    // cout << "Sum is: " << sum << endl;

    int res =  sumNumber(n);
    cout << "The sum of the number is: " << res << endl;


    return 0;
}