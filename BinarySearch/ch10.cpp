// next letter:find the smallest letter in the array that is strictly greater than target in a sorted array of letters.
// i/p: letters = ['c', 'f', 'j'] and target='a
// o/p: 'c'

#include <bits/stdc++.h>
using namespace std;

char smallestLetter(vector<char> &letters, char target)
{
    int n = letters.size();
    int start = 0;
    int end = n - 1;
    char ans = -1; // default to first for wrap-around

     while (start <= end) {
        int mid = start + (end - start) / 2;

        if (letters[mid] > target) {
            ans = letters[mid];  // Potential answer
            end = mid - 1;       // Look for even smaller valid letter
        } else {
            start = mid + 1;     // Move right
        }
    }

    return ans;
}

int main()
{
    vector<char> letters = {'c', 'f', 'j'};
    char target = 'j';

    cout << "Next letter is: " << smallestLetter(letters, target) << endl;
    return 0;
}
