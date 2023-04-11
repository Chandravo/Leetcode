//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int integerBreak(int n) {
    vector<int> dp(n+1,0);
    dp[0]=1;
    dp[1]=1;
    for (int i=2;i<=n;i++){
        // cout<<i<<endl;
        for (int j=1;j<=i/2;j++){
            // cout<<j<<" ";
            dp[i]=max(dp[i],max(j,dp[j])*max(i-j,dp[i-j]));
        }
        // cout<<endl;
    }
    // for (int i:dp) cout<<i<<" ";
    cout<<endl;
    return dp[n];
}

int main(){
    cout<<integerBreak(11)<<endl;
}