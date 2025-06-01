#include <bits/stdc++.h>
using namespace std;

int longSubstringUniqueChar(string &s, int k){
    int i=0, j=0;
    unordered_map<char, int> mp;
    int mx = INT_MIN;

    while(j<s.size()){

        mp[s[j]]++;

        if(mp.size() < k){
            j++;
        } else if(mp.size() == k){
            mx = max(mx, (j-i+1));
            j++;
        } else if(mp.size() > k){
            while(mp.size() > k){
                mp[s[i]]--;
                if(mp[s[i]] == 0){
                    mp.erase(s[i]);
                }
                i++;
            }
            j++;
        }
    }
    return (mx == INT_MIN) ? 0 : mx;
}

int main(){



    return 0;
}