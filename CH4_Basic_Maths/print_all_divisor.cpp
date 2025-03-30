#include <bits/stdc++.h>
using namespace std;

// print all the divisor of n
void allDivisor(int n){
    for(int i=1; i<=n; i++){
        if( n%i == 0){
            cout << i << " ";
        }
    }
}

// the TC for the above is O(n), so we can make it better by using squrt concept.
// it will give you the correct o/p but not in sorted manner so if you want to sort it, you can use vector.
// TC: O(sqrt(n))
void printDivisor(int n){
    vector<int> ls;
    for(int i=1; i*i <= n; i++){
        if(n % i == 0){
            ls.push_back(i);
            if ((n / i) != i)
            {
                ls.push_back(n / i);
            }
        }
    }
    // O(no of factors * log(no of factors))
    sort(ls.begin(), ls.end());

    // O(number of factors)
    for(auto it : ls) cout << it << " "; // to print the iterator
}
 

int main(){

    int n;
    cout << "Enter the value of n:" << endl;
    cin >> n;
    // allDivisor(n);
    printDivisor(n);

    return 0;


}