#include <iostream>
using namespace std;

void printFib(int n){
    int a=0, b=1;
    cout << a << " " << b << " ";
    for(int i=2; i<=n; i++){
        int nextNo = a+b;
        cout << nextNo << " ";
        a=b;
        b=nextNo;
    }
    
}

int main(){

    printFib(10);
   


    return 0;
}