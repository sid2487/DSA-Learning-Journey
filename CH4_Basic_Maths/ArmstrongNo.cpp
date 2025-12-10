#include <bits/stdc++.h>
using namespace std;
// suppose 153 is a armstrong no then cube of each digit should be equal to the original no.
// \(1^{3}+5^{3}+3^{3}=1+125+27=153\).            

bool armstrongNo(int n)
{
    int originalNo = n;
    long long sum = 0;

    while(n>0){

        int lastDigit = n % 10;
        sum = sum + (lastDigit*lastDigit*lastDigit);
        n = n / 10;
    }
    if(sum == originalNo) return true;
    else return false;
}

int main(){

    cout << "Enter the value of n:" << endl;
    int n;
    cin >> n;

    bool res = armstrongNo(n);
    if(res == 1){
        cout << "Yes its an armstrong no" << endl;
    } else {
        cout << "No its not an armstrong no" << endl;
    }




    return 0;
}