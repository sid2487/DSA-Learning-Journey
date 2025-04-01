#include <bits/stdc++.h>
using namespace std;

// Printing Fibonaci Series

int main()
{

    int n;
    cout << "Enter the n:" << endl;
    cin >> n;

    int a = 0, b = 1;
    cout << a << " " << b << " ";

    for (int i = 1; i <= n; i++)
    {
        int nextNo = a + b;
        cout << nextNo << " ";
        a = b; // make b as a
        b = nextNo; // make nextno as b
    }

    return 0;
}