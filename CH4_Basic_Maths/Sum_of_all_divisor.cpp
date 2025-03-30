#include <bits/stdc++.h>
using namespace std;

// Function to compute sum of divisors of a number
int sumDivisors(int n)
{
    int sum = 0; // Make it a local variable
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    return sum;
}

// Function to compute Σi F(i) where F(i) = sum of divisors of i
int totalSum(int n)
{
    int result = 0;
    for (int i = 1; i <= n; i++)
    {
        result += sumDivisors(i); // Compute sum of divisors for each i
    }
    return result;
}

int main(){
             


int n;
cout << "Enter the number:" << endl;
cin >> n;

int res = totalSum(n);
cout << "The sum is:" << res << endl;



    return 0;
}