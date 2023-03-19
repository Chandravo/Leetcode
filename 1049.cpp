//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int lastStoneWeightII(vector<int>& stones) {
    short int summ=accumulate(stones.begin(),stones.end(),0);
    short int t=summ/2;
    bool dp[stones.size()+1][t+1];
    for (int i=0;i<=t;i++) dp[0][i]=0;
    for (int i=0;i<=stones.size();i++) dp[i][0]=1;

    for (short int i=1;i<=stones.size();i++){
        for (short int j=1;j<=t;j++){
            if (stones[i-1]<=j) {
                dp[i][j]=dp[i-1][j-stones[i-1]] || dp[i-1][j];
            }
            else dp[i][j] = dp[i-1][j];
        }
    }

    for (short int i=t;i>=0;i--){
        if (dp[stones.size()][i]) summ-2*i;
    }
}

int main(){
    
}