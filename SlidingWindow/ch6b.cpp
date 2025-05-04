// longest substring with atleast k repeating characters.
// i/p: s = "ababbc" and k = 2
// o/p: longest substring is "ababb" as a is repeated 2 times and b is 3 times.
// o/p: 5

// T.C. = O(n² * K). But for small K, T.C. ≈ O(n²) in practice if K is bounded (≤26).
// S.C. = O(K). for lowercase letters only sc: O(1)

#include<bits/stdc++.h>
using namespace std;

int longSubstring(string &s, int k){
    int n = s.size();
    int maxLen = 0;

    for(int i=0; i<n; i++){
        unordered_map<char, int> freqMap;
        for(int j=i; j<n; j++){
            freqMap[s[j]]++;

            bool isValid = true;
            for(auto& pair : freqMap){
                if(pair.second < k){
                    isValid = false;
                    break;
                }
            }
            if(isValid){
                maxLen = max(maxLen, (j-i+1));
            }
        }
    }
    return maxLen;
}

int main(){



    return 0;
}