#include <bits/stdc++.h>
using namespace std;

string decimalTobinary(int n){
    string res;
    while(n != 0){
        if(n%2 == 1) res += "1";
        else res += "0";
        n = n/2;
    }
    reverse(res.begin(), res.end());
    return res;
}

int main(){

    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;

    cout << decimalTobinary(n) << endl;


    return 0;
}