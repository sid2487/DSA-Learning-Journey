#include<bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> &pages, int m, int maxPages){
    int student = 1;
    int sum = 0;

    for(int i=0; i<pages.size(); i++){
        if(pages[i] > maxPages) return false;

        sum = sum + pages[i];
        if(sum > maxPages){
            student++;
            sum = pages[i];
        }

        if(student > m){
            return false;
        }
    }
    return true;
}

int allocateBooks(vector<int> &pages, int m){
    int n = pages.size();
    if(m>n) return -1;

    int start = *max(pages.begin(), pages.end());
    int end = accumulate(pages.begin(), pages.end(), 0);
    int result = -1;

    while(start<=end){
        int mid = start + (end-start)/2;

        if(isPossible(pages, m, mid)){
            result = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return result;
}

int main(){

    vector<int> pages = {20, 30, 40, 50};
    



    return 0;
}