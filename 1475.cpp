//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

vector<int> finalPrices(vector<int>& prices) {
    vector<int> res(prices.size(),-1);
    stack<int> s;
    for (int i=0;i<prices.size();i++){
        while (prices[s.top()]>prices[i]){
            prices[s.top()]= prices[i];
            s.pop();
        }
        s.push(i);
    }        
    for (int i=0;i<prices.size();i++){
        if (res[i]==-1) res[i]=prices[i];
    }
    return res;
}

int main(){
    
}