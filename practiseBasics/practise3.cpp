#include <bits/stdc++.h>
using namespace std;

// Write a function that takes two numbers and multiplies them, then prints the result.

int productNum(int num1, int num2){
    int num3 = num1 * num2;
    return num3;
}

int main(){

    int a, b;
    cout << "Enter the two numbers " << endl;
    cin >> a >> b;

    int res = productNum(a, b);
    cout << "The product of two numbers are: " << res << endl;


    return 0;
}