// best time to buy and sell the stocks wiht maximum profit and maximum of one transaction allowed.
// ** if you are selling on ith day, you buy on the minimum price from {ist to (i-1)}

#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &arr){
    int n = arr.size();
    int mini = arr[0], profit = 0;

    for(int i=1; i<n; i++){
        int cost = arr[i] - mini;
        profit = max(profit, cost);

        mini = min(mini, arr[i]);
    }
}

int main(){

    return 0;
}