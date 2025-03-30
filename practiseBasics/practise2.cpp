#include <bits/stdc++.h>
using namespace std;

// function to find the maximum
int finMax(int num1, int num2){
    if(num1 > num2){
        return num1;
    } else {
        return num2;
    }
}

int main(){

    int a, b;
    cin >> a >> b;
    int res = finMax(a, b);
    cout << "The bigger number is " << res;



    return 0;
}