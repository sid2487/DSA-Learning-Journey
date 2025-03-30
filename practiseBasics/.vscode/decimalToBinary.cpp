#include <bits/stdc++.h>
using namespace std;

// To convert from decimal to binary

int main()
{

    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;

    // int ans = 0;
    // int i = 0;
    // while(n != 0){
    //     int bit = n&1;
    //     ans = (bit * pow(10, i) + ans);
    //     n = n >> 1;
    //     i++;
    // }
    // cout << "Answer is: " << ans << endl;

    // using for loop
    int ans = 0;
    for (int i = 0; n != 0; i++)
    {
        int bit = n & 1;
        ans = (bit * pow(10, i)) + ans;
        n = n >> 1;
    }
    cout << "Answer is: " << ans << endl;

    return 0;
}