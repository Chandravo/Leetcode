//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
    int cp=prices[0],p=0;
    int i=0,j=0;
    while (++j<prices.size()){
        if (prices[j]<prices[j-1]){
            cp=prices[j-1]-prices[i];
            p+=cp;
            i=j;
        }
    }
    if (j==prices.size() && i!=prices.size()-1){
        p+=prices[j-1]-prices[i];
    }
    return p;
}

int main(){
    
}