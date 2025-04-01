#include <bits/stdc++.h>
using namespace std;

// Pass by reference : I don't want to pass a copy rather i want my function to make changes to the original one then you have to use & and it takes the address

void doSomething(string &s){
    cout << s << endl;
    s[0] = 't';
    cout << s << endl;
}

void doSomething2(int &num){
    cout << num << endl;
    num += 5;
    cout << num << endl;
}


int main(){

    string s = "sits";
    doSomething(s); // now its sending the address of the s
    cout << s << endl;

    int num = 10;
    doSomething2(num); // now its sending the address of num i.e the original one
    cout << num << endl;





    return 0;
}