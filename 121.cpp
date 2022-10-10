//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;
int maxProfit(vector<int>& prices) {
    int mx=0;
    int i=0,j=0;
    while (++j<prices.size()){
        if (prices[j]<prices[i]){
            i=j;
        }
        else{
            mx=max(mx,prices[j]-prices[i]);
        }
    }
    return mx;
}
int main(){
    vector<int> prices{7,1,5,3,6,4};
    cout<<maxProfit(prices);
}