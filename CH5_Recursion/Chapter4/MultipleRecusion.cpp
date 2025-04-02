#include <bits/stdc++.h>
using namespace std;

// Print fib term using recursion (use of multiple recursion)
// TC ~ 2^n not exactly but we can say exponential.
// if there are multiple recurssion call happend, they doesn't calls simutaneusly, one calls then ended then the next comes.

// t : O(pow(2, n))
int f(int n) {
    if(n <= 1) return n;
    int last = f(n-1);
    int slast = f(n-2);
    return last + slast;

} 

// tc: O(n)
int fib(int n){
    if(n<=1) return n;

    int prev2=0, prev1=1, curr;
    for(int i=2; i<=n; i++){
        curr = prev1 + prev2;
        prev2 = prev1; // prev1 becomes prev2
        prev1 = curr; // curr becomes prev1
    }
    return prev1;
}

int main() {

    cout << f(1) << endl;
    



    return 0;
} 