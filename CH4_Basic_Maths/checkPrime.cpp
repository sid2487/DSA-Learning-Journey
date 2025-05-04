#include <bits/stdc++.h>
using namespace std;

// method 1 : TC: O(sqrt(n)) the number which has only two factors, 1 and itself called prime.
void checkPrime(int n){
    int cnt = 0;
    for (int i=1; i*i<=n; i++){
        if(n%i == 0){
            cnt++;
            if((n/i) != i) cnt++;
        }
    }
    if(cnt == 2) {
        cout << "Yes it is a prime number" << endl;
    } else {
        cout << "Not a prime number" << endl;
    }
}



// method 2 : TC: O(n) ------>> Brutforce, slow but easy to understand.
void checkPrime2(int n){
    if(n<2){
        cout << "Not a prime number" << endl;
    }
    for(int i=2; i<n; i++){
        if(n%i == 0){
            cout << "Not a prime no" << endl;
            return; // Exit immediately if a divisor is found
        } 
    }
    cout << "It's a prime number" << endl;
}


int main(){

    int n;
    cout << "Enter the value of n:" << endl;
    cin >> n;
    

    checkPrime(n);



    return 0;
}