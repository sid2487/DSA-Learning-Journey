#include <bits/stdc++.h>
using namespace std;

// Print name 5 times
// TC and SC = O(n)
void print1(int i, int n)
{
    if (i > 3)
        return;
    cout << "Vanshu" << endl;
    print1(i+1, n);
}

// Print linearly from 1 to n
void print2(int i, int n){
    if(i>n) return ;
    cout << i << " ";
    print2(i+1, n);
}

// Print in opposite fashion(5,4,3,2,1)
void print3(int i, int n){
    if(i<1) return;
    cout << i << " ";
    print3(i-1, n);
}

// Print from 1 to n but in back-tracking(last guy should be executed first and for this write print statement after recursive function)
void print4(int i, int n){
    if(i<1) return ;
    print4(i-1, n);
    cout << i << " ";
}

// print from n to 1 by using backtracking
void print5(int i, int n){
    if(i>n) return;
    print5(i+1, n);
    cout << i << " "; 
}



int main(){
    

    int n;
    cout << "Enter the value of n:" << endl;
    cin >> n;

    // print1(1, n);
    // print2(1, n);
    // print3(n, n);
    // print4(n, n);
    print5(1,n);



    return 0;
}