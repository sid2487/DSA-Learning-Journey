#include <iostream>
using namespace std;

int sum(int n){
    if(n==0) return 0;
    return n + sum(n-1);
}

int main() {

    int n;
    cout << "Enter the value of n:" << endl;
    cin >> n;

    cout << "The sum of n number using funcitonal is:" << sum(n) << endl;


    return 0;
}