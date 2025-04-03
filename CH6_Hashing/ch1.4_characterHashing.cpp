#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cout << "Enter the sentence: ";
    getline(cin, s);

    int hash[256] = {0};
    for(int i=0; i<s.size(); i++){
        hash[s[i]]++;
    }

    int query;
    cout << "Enter the query: ";
    cin >> query;

    while(query--){
        char c;
        cout << "Enter the character you want to check: ";
        cin >> c;
        cout << "The number of times " << c << " " << "occurs is: " << hash[c] << endl;
    }




    return 0;
}