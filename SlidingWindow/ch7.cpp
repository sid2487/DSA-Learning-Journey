// longest substring with no repeating characters(i.e. all(window size) unique characters)
// condition: compare (mp.size() and window_size(j-i+1))


#include <bits/stdc++.h>
using namespace std;

int maxSubarrayUniqueChar(string &s){
    int i=0, j=0;
    unordered_map<char, int> mp;
    int mx = 0;
    

    while(j<s.size()){
        mp[s[j]]++;

        if (mp.size() > (j -i+1))
        {
            j++;
        }
        else if(mp.size() == (j-i+1)){
            mx = max(mx, (j-i+1));
            j++;
        } else if(mp.size() < (j-i+1)){
            while(mp.size() < j-i+1){
                // s[i]--;
                mp[s[i]]--;
                if(mp[s[i]] == 0){
                    mp.erase(s[i]);
                }
                i++;
            }
            j++;
        }
    }
    return mx;
}

int main() {

    string s = "abcabcbb";
    int ans = maxSubarrayUniqueChar(s);
    cout << ans << endl;

        return 0;
}
