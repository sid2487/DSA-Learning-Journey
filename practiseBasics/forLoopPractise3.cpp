#include <iostream>
using namespace std;

// Pritning the nth term only of the fib series

int main()
{

    int n;
    cout << " Enter n: " << endl;
    cin >> n;

    if (n <= 0)
    {
        cout << "Invald input" << endl;
    }

    int a = 0, b = 1, nextNo;

    if (n == 1)
    {
        cout << "The" << n << "st fib series term:" << a << endl;
    }
    if (n == 2)
    {
        cout << "The" << n << "nd fib series term:" << b << endl;
    }

    for (int i = 3; i <= n; i++)
    {
        nextNo = a + b;
        a = b;
        b = nextNo;
    }

    cout << "The" << n << "th fib term:" << b << endl;

    return 0;
}