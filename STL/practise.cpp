#include <bits/stdc++.h>
using namespace std;

int main(){


    set<int> st = {1,2,3,4};
    // int search = st.find(3);
    auto it = st.find(6);
    cout << *it << endl;
    cout << &it << endl;

    if (it != st.end())
        cout << *it;
    else
        cout << "Not found" << endl;

    for(auto it: st){
        cout << it << " ";
    }

    return 0;
}