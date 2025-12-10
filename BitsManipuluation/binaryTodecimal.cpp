#include <bits/stdc++.h>
using namespace std;

int binaryTodecimal(string n){
    int length = n.length();
    int num = 0;
    int p2 = 1;

    for(int i= length-1; i >= 0; i--){
        if(n[i] == '1'){
            num = num + p2;
        }
        p2 = p2 * 2;
    }
    return num;
}

int main(){
    string n = "1101";
    cout << binaryTodecimal(n) << endl; 
    return 0;
}