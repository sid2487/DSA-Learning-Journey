#include<bits/stdc++.h>
using namespace std;

int count(int n){
    int cnt = 0;
    while (n>0){
        int lastDigit = n%10;
        n = n/10;
        cnt = cnt +1; 
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