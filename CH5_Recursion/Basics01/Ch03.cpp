#include <bits/stdc++.h>
using namespace std;

// Sum of n numbers

int sumOfNumbers(int i, int sum){
    if(i<1){
        return sum;
    }
    return sumOfNumbers(i-1, sum+i);
}

int main(){


cout << "Enter the value of n:" << endl;
int n;
cin >>n;

cout << "The sum is:" << sumOfNumbers(n, 0) << endl;


    return 0;


}