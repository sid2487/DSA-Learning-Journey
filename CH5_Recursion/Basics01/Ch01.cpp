#include<bits/stdc++.h>
using namespace std;

// Stack overflow
// A stack overflow occurs when a program uses more stack memory than what is available, typically due to too many recursive function calls.
void print()
{
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