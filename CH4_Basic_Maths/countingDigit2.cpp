#include <bits/stdc++.h>
using namespace std;

// given a positive integer n and you have to count how many digit evenly divide n(n%digit==0)..if digit is 0 ignore.

int count(int n){
    int original = n;
    int cnt = 0;
    while(n>0){

        int lastDigit = n%10;
        if(lastDigit != 0 && original % lastDigit == 0){
            cnt = cnt + 1;
        }
        n = n / 10;
    }
    return cnt;
}

int main(){

    cout << "Enter the number:" << endl;
    int n;
    cin >> n;

    int ans = count(n);
    cout << "The count is:" << ans << endl;

    return 0;
}