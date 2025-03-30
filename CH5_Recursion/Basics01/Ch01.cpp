#include<bits/stdc++.h>
using namespace std;

// Stack overflow
void print(){
    cout << 1 << endl;
    print();
}

// after applying the base condition
int cnt = 0;
void print2(){
    if(cnt == 3) return; // this is the base condtion 
    cout << cnt << endl;
    cnt++;
    print2();
}

int main(){

    // print();
    print2();



    return 0;
}