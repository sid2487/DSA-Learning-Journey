#include <bits/stdc++.h>
using namespace std;

// write a program that takes an input of age and prints if you are adult or not
int main(){

    cout << "Enter your age" <<endl;
    int age;
    cin >> age;
    if(age>=18){
        cout << "You are an adult" << endl; 
    } else {
        cout << "You are a kid" << endl;
    }




    return 0;
}