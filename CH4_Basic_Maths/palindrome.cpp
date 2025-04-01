#include <bits/stdc++.h>
using namespace std;

// A palindrome number is a number that reads the same forward and backward.

    bool isPalindrome(int x)
{
    if (x < 0)
        return false;

    int originalNum = x;
    long long revNum = 0;

    while (x > 0)
    {
        int lastDigit = x % 10;
        x = x / 10;

        revNum = (revNum * 10) + lastDigit;
    }
    if (revNum == originalNum)
        return true;
    else
        return false;
}

int main(){

    int n;
    cout << "Enter the number:" << endl;
    cin >> n;

     bool res = isPalindrome(n);
     if(res == 1){
        cout << "Yes its a palindrome number" << endl;
     } else {
        cout << "No its not a palindrome number" << endl;
     }


    return 0;
}