#include <bits/stdc++.h>
using namespace std;


string decimaltTobinary(int n){
    string res;
    while(n != 0){
        // if(n%2 == 1) res += '1';
        // else res += '0';

        res += (n%2) ? '1' : '0';

        n = n/2;
    }  
    
    reverse(res.begin(), res.end());
    return res;
}

string onesCompliment(string bin){
    for (char &c : bin){
        c = (c == '0') ? '1' : '0';
    }
    return bin;
}


int main(){

    int n = 13;
    string bin = decimaltTobinary(n);
    string ones = onesCompliment(bin);

    cout << "Binary: " << bin << endl;
    cout << "1's compliment: " << ones << endl;

    return 0;
}