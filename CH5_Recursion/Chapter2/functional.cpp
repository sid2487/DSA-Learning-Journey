#include <iostream>
using namespace std;

// Definition : The function itself returns the answer instead of modifying parameters.

// Key Idea : Each recursive call does part of the work and returns the result to the previous call.

// Best For : Problems where results are built up using return values(e.g., factorial, sum of numbers)                                    .

int sum(int n)
{
    if(n==0) return 0;
    return n + sum(n-1);
}

int main() {

    int n;
    cout << "Enter the value of n:" << endl;
    cin >> n;

    cout << "The sum of n number using funcitonal is:" << sum(n) << endl;


    return 0;
}