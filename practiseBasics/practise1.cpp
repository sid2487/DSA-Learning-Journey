#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if(n == 1) {
        for(int i = 10; i >= 1; i--) {
            cout << i << " ";
        }
    } else {
        for(int i = n * 10; i >= 2; i -= 2) {
            cout << i << " ";
        }
    }
    return 0;
}