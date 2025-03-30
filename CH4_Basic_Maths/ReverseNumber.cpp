#include <bits/stdc++.h>
using namespace std;

// Reverse a number
int reverseNumber(int x)
{
    bool isNegative = (x < 0);

    // Handle the edge case where x is INT_MIN
    if (x == INT_MIN)
    {
        return 0;
    }

    x = abs(x); // Safe to call abs() now since x is not INT_MIN

    int revNum = 0;
    while (x > 0)
    {
        int lastDigit = x % 10;
        x = x / 10;

        // Check for overflow before updating revNum
        if (revNum > INT_MAX / 10)
        {
            return 0;
        }

        revNum = (revNum * 10) + lastDigit;
    }

    return isNegative ? -revNum : revNum;
}

int main(){

    cout << "Enter the number:" << endl;
    int n;
    cin >> n;

    int ans = reverseNumber(n);
    cout << "The reverse no is:" << ans << endl;

    return 0;
}