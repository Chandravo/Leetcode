//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int longestPalindromeSubseq(string s) {
    string b=s;
    reverse(s.begin(),s.end());
    short int dp[2][s.size()+1];
    for (short int i=0;i<=s.size();i++) dp[0][i]=0;
    dp[1][0]=0;
    for (short int i=1;i<=s.size();i++){
        for (short int j=1;j<=s.size();j++){
            if (b[i-1]==s[j-1]) dp[i&1][j]=1+dp[(i-1)&1][j-1];
            else dp[i&1][j]=max(dp[(i-1)&1][j],dp[i&1][j-1]);
        }
    }
    return max(dp[0][s.size()],dp[1][s.size()]);
}

int main(){
    
}