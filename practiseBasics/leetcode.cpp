#include <iostream>
using namespace std;

// substract the product and sum of digits of an integer

int substractProductAndSum(int n)
{
    int prod = 1;
    int sum = 0;

    while (n != 0)
    {
        int digit = n % 10;
        prod = prod * digit;
        sum = sum + digit;

        n = n / 10;
    }
    int answer = prod - sum;
    return answer;
}

int main()
{

    int num;
    cin >> num;

    int result = substractProductAndSum(num);
    cout << result;

    return 0;
}