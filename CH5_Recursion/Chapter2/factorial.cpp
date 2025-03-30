#include <iostream>
using namespace std;

// Factorial of n using functional way
int factorial(int n){
    if(n==0) return 1;
    return n * factorial(n-1);
}

// Factorial of n using parametrised way
int factorial2(int i, int prod) {
    if(i<1) return prod;
    return factorial2(i-1, prod*i);
}
int main(){

    cout << "Enter the value of n:" << endl;
    int n;
    cin >> n;

    // cout << "The factorial of n is:" << factorial(n) << endl;
    cout << "The factorial of n is:" << factorial2(n, 1) << endl;

    return 0;
}