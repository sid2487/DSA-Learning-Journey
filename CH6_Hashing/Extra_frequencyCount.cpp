#include <bits/stdc++.h>
using namespace std;

// Count occurrences of each element in an array(Numbers are small).

vector<int> frequencyCount(vector<int>& arr){
    vector<int> freq(101, 0);
    for(int num : arr){
        freq[num]++;
    }
    return freq; // returns the frequency array
}

    int main()
{

    vector<int> arr = {2,3,2,3,5,6};
    vector<int> result = frequencyCount(arr);

    for(int i=0; i<result.size(); i++){
        cout << i << " appears " << result[i] << " times " << endl;
    }




    return 0;
}
