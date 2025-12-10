#include <bits/stdc++.h>
using namespace std;

int checkPrime(int n){
    int cnt = 0;
    for(int i=1; i*i<=n; i++){
        if(n%i == 0){
            cnt++;

            if(n/i != i){
                cnt++;
            }
        }
    }
    return cnt;
}

int main(){

    int ans = checkPrime(5);
    cout << ans << endl;

    return 0;
}