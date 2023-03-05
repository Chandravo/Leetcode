//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int minDistance(string w1, string w2) {
    short int m=w1.size();
    short int n=w2.size();
    short int dp[2][n+1];
    for (short int i=0;i<=n;i++) dp[0][i]=0;
    dp[1][0]=0;
    for (short int i=1;i<=m;i++){
        for (short int j=1;j<=n;j++){
            if (w1[i-1]==w2[j-1]) dp[i&1][j]=1+dp[(i-1)&1][j-1];
            else dp[i&1][j]=max(dp[i&1][j-1],dp[(i-1)&1][j]);
        }
    }        
    return m+n-2*max(dp[1][n],dp[0][n]);
}

int main(){
    
}