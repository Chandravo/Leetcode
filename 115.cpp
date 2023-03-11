//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int numDistinct(string s, string t) {
    unsigned int dp[s.size()+1][t.size()+1];
    for (int i=0;i<=t.size();i++) dp[0][i]=0;
    for (int i=0;i<=s.size();i++) dp[i][0]=1;

    for (int i=1;i<=s.size();i++){
        for (int j=1;j<=t.size();j++){
            if (s[i-1]==t[j-1]) dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
            else dp[i][j]=dp[i-1][j];
        }
    }
    return dp[s.size()][t.size()];
    
}

int main(){
    
}