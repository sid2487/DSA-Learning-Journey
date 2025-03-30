#include <bits/stdc++.h>
using namespace std;

//pass by value
void doSomething(int num){
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
}

void doSomething2(string s){
    cout << s << endl;
    s[0] = 't';
    cout << s << endl;
}
    
int main(){

        // int num = 10;
        // doSomething(num); // this num sends the copy of 10 not the original.
        // cout << num << endl;

        string s = "sid";
        doSomething2(s); // similarly it sends the copy of s not the original
        cout << s << endl;


    return 0;
}