#include <bits/stdc++.h>
using namespace std;

// Functions are set of code which performs something for you
// Functions are used to modularise the code
// Functions are used to increase readability
// Functions are used to use same code multiple times
// void -> which does not returns anything
// return 
// parameterised
// non-parameterised

void printName(string name){
    cout << "Hey " << name;
}

int main(){

    string name;
    cout << "Enter the name "<<endl;
    cin>>name;
    printName(name);


    
    return 0;
}