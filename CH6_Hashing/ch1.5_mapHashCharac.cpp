#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cout << "Enter the string: ";
    cin >> s;

   map<char, int> mpp;
   for(int i=0; i<s.size(); i++){
        mpp[s[i]]++;
   }

   int q;
   cout << "Enter the q: ";
   cin >> q;

   while(q--){
    char c;
    cout << "Enter the character to search: " ;
    cin >> c;

    cout << "count is: " << mpp[c] << endl;
    
   }



    return 0;
}