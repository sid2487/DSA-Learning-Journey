#include <bits/stdc++.h>
using namespace std;

// Take two numbers and print its sum


int sum(int num1, int num2){
    int num3 = num1 + num2; // 5+6
    return num3;
}

int main(){

    int num1, num2;
    cin >> num1 >> num2;
    int res = sum(num1, num2); // 11
    cout << res;
    
    return 0;
}