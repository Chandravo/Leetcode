//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
    int hold = 0;
    int sell = INT_MIN;
    int buy = -prices[0];
    for (int i=1;i<prices.size();i++){
        int prevhold = hold;
        // int prevbuy=buy;
        hold=max(hold,sell);
        sell=buy-prices[i];
        buy=max(buy,prevhold-prices[i]);
        // sell=prevbuy-prices[i];
    }        
    return max(hold,sell);
}

int main(){
    
}