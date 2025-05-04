// minimum window substring: Given two strings s and t of lengths m and n respectively, return the minimum window substring of s such that every character in t (including duplicates) is included in the window. If there is no such substring, return the empty string "".

// core concept: 
// firstly, store the input string 't' which you have to use in the bigger string 's'. and store the size of map in the count, and when count becomes zero that will be our one possible answer candidate.
// secondly, now start with the first element using sliding window concept, put i =0, and j=0, and then check in the bigger string, if arr[j] is found in the map, count--, and mp[a[j]]--.
// when count == 0, now shrink it to optimise, and do i++ , mp[arr[i]]++ when you get the element, and do till count == 1 , and if this happen then move the j, see the code for more clarity.

// this code is valid when substring requird sholud not be in order. for substring to be in order, we'll see later.

#include <bits/stdc++.h>
using namespace std;

string minWindow(string s, string t){
    if(s.size() < t.size()) return "";

    unordered_map<char, int> mp;
    for(char c : t){
        mp[c]++;
    }

    int count = t.size();
    int i =0, j=0;
    int minLen = INT_MAX;
    int start = 0;

    while(j<s.size()){
        if(mp[s[j]] > 0){
            count--;
        }
        mp[s[j]]--;
        j++;

        // if count == 0, a valid possible answer candidate
        if(count == 0){
            while(count == 0){
                if(j-i < minLen){
                    minLen = j-i;
                    start = i;
                }

                mp[s[i]]++;
                if(mp[s[i]] > 0) count++;
                i++;
            }
        }
    }
    return minLen == INT_MAX ? "" : s.substr(start, minLen);
}

int main() {




    return 0;
}
