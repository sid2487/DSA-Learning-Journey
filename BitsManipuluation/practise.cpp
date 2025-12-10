#include <bits/stdc++.h>
using namespace std;

string decimalTobinary(int n){

    string res;
    while(n > 0){
        if(n%2 == 1) res += '1';
        else res += '0';

        n = n/2;
    }
    reverse(res.begin(), res.end());
    return res;
}

string onesCompliment(string bin){
    for(char &c : bin){
        if(c == '1') c = '0';
        else c = '1';
    }
    return bin;
}

int main(){

    int n = 13;

    string bin = decimalTobinary(n);
    string onesC = onesCompliment(bin);

    cout << "Binary is: " << decimalTobinary(n) << endl;
    cout << "Ones compliment is: " << onesCompliment(bin) << endl;

    return 0;
}