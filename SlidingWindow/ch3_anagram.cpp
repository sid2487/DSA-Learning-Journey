#include <bits/stdc++.h>
using namespace std;

// count occurence of anagram: ek badi si string and ek angram given hota hai and we have to see how many times that anagram comes in the big string, so we have to return the count.

// anagrams: they must contain the same letters, each letters must appear the same no of times and the order doesn't mattter.

// tc: O(k+n) k is length of pattern ptr and n is length of string
// sc: O(1) [if we consider only lowercase letters] and 
// O(d) [if there are d unique characters in pattern]

    int coutnAnnagram(string &s, string ptr)
{
    int k = ptr.length();
    unordered_map <char, int> mpp;
    for(char c : ptr){
        mpp[c]++;
    }

    int i=0, j=0;
    int count = mpp.size();
    int ans = 0;

    while(j<s.size()){
        // process current character
        if(mpp.find(s[j]) != mpp.end()) {
            mpp[s[j]]--;
            if(mpp[s[j]] == 0){
                count--;
            }
        }

        // check the window size
        if((j-i+1) < k){
            j++;
        } else if((j-i+1) == k){
            if(count == 0){
                ans++;
            }

            // slide the window
            if(mpp.find(s[i]) != mpp.end()){
                if(mpp[s[i]] == 0){
                    count++;
                }
                mpp[s[i]]++;
            }
            i++;
            j++;
        }
    }

    return ans;
}

int main(){

    string s = "cbaebabacd";
    string pattern = "abc";
    int result = coutnAnnagram(s, pattern);
    cout << result << endl;

    return 0;
}

