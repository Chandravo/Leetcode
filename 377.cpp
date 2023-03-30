//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int combinationSum4(vector<int>& c, int a) {
    int n=c.size();
    unsigned int dp[n+1][a+1];
    for (int i=0;i<=a;i++) dp[0][i]=0;
    for (int i=0;i<=n;i++) dp[i][0]=1;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=a;j++){
            if (c[i-1]<=j){
                dp[i][j]=dp[i][j-c[i-1]]+dp[i-1][j];
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }        
    return dp[n][a];        
}

int main(){
    
}