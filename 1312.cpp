//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int minInsertions(string s) {
    string s2=s;
    reverse(s.begin(),s.end());
    int dp[2][s.size()+1];
    for (int i=0;i<=s.size();i++) dp[0][i]=0;
    dp[1][0]=0;
    for (int i=1;i<=s.size();i++){
        for (int j=1;j<=s.size();j++){
            if (s2[i-1]==s[j-1]) dp[i&1][j]=1+dp[(i-1)&1][j-1];
            else dp[i&1][j] = max(dp[(i-1)&1][j],dp[i&1][j-1]);
        }
    }    
    return (s.size()-max(dp[0][s.size()],dp[1][s.size()]));    
}

int main(){
    
}