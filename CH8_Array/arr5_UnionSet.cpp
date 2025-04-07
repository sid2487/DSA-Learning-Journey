// brut: tc: O(n1logn + n2logn) + O(n1+n2) and sc: O(n1+n2) + O(n1+n2)(this one is to just return the answer).
#include<bits/stdc++.h>
using namespace std;

vector <int> sortedArray(vector<int>& a, vector<int>& b){
    int n1 = a.size();
    int n2 = b.size();
    set<int> st;
    
    for(int i=0; i<n1; i++){
        st.insert(a[i]);
    }
    for(int i=0; i<n2; i++){
        st.insert(b[i]);
    }

    vector<int> temp;
    for(auto it : st){
        temp.push_back(it);
    }
    return temp;
}
// optimal: tc: O(n1+n2) and sc: O(n1+n2) to return the answer.
vector <int> sortedArray2(vector<int>& a, vector<int>& b){
    int n1 = a.size();
    int n2 = b.size();
    int i = 0;
    int j = 0;
    vector<int> unionArr;
    while(i<n1 && j<n2){
        if(a[i] <= b[j]){
            if(unionArr.size() == 0 || unionArr.back() != a[i]){
                unionArr.push_back(a[i]);
            }
            i++;
        }
        else{
            if(unionArr.size() == 0 || unionArr.back() != a[j] ){
                unionArr.push_back(b[j]);
            }
            j++;
        }
    }

    while(j<n2){
        if(unionArr.size() == 0 || unionArr.back() != b[j]){
            unionArr.push_back(b[j]);
        }
        j++;
    }

    while (i < n1)
    {
        if (unionArr.size() == 0 || unionArr.back() != a[i])
        {
            unionArr.push_back(a[i]);
        }
        i++;
    }
    return unionArr;
}




int main() {

    vector<int> a1 = {1,2,3,4,5,0};
    vector<int> a2 = {2,0,6,8,4,0};

    vector<int> res = sortedArray(a1, a2);
    for(int num : res){
        cout << num << " ";
    }

    return 0;
}