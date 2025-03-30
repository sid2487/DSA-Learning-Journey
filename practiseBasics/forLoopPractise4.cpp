#include <iostream>
using namespace std;

// Printing the prime number

int main()
{

    int n;
    cout << "Enter n:" << endl;
    cin >> n;

    bool isPrime = 1;

    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }

    if (isPrime == 0)
    {
        cout << "Not a prime number" << endl;
    }
    else
    {
        cout << "is a prime number" << endl;
    }

    return 0;
}