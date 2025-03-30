#include <bits/stdc++.h>
using namespace std;

// Print fib term using recursion (use of multiple recursion)
// TC ~ 2^n not exactly but we can say exponential.
int f(int n) {
    if(n <= 1) return n;
    int last = f(n-1);
    int slast = f(n-2);
    return last + slast;

} 

int main() {

    cout << f(1) << endl;
    



    return 0;
} 