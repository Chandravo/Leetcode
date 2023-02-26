//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int coinChange(vector<int>& c, int a) {
    int n=c.size();
    int dp[n+1][a+1];
    for (int i=0;i<=a;i++) dp[0][i]=INT_MAX-1;
    for (int i=0;i<=n;i++) dp[i][0]=0;

    for (int i=1;i<=n;i++){
        for (int j=1;j<=a;j++){
            if (c[i-1]<=j){
                dp[i][j]=min(1+dp[i][j-c[i-1]],dp[i-1][j]);

            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    } 
    return (dp[n][a]==INT_MAX-1)? -1:dp[n][a];       
}

int main(){
    
}