#include <bits/stdc++.h>
using namespace std;
// There are lot of inbuild functions as well like min,max and how its written
int max(int num1, int num2){
    if(num1 >= num2) return num1;
    else return num2;
}

int main(){

        int num1, num2;
        cin >> num1 >> num2;
        int res = max(num1, num2);
        cout << res;    


    return 0;
}