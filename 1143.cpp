//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;
int helper(string &t1, string &t2, int m, int n, vector<vector<int>> &dp){
    if (m==0 || n==0) return 0;
    if (dp[m-1][n-1]!=0) return dp[m-1][n-1];
    if (t1[m-1]==t2[n-1]) return dp[m-1][n-1] = (1+helper(t1,t2,m-1,n-1,dp));
    else return dp[m-1][n-1] = max(helper(t1,t2,m-1,n,dp),helper(t1,t2,m,n-1,dp));

}

int longestCommonSubsequence(string text1, string text2) {
    // vector<vector<int>> dp (text1.size()+1,vector<int> (text2.size()+1,0));
    // vector<vector<int>> dp (2,vector<int> (text2.size()+1));
    int dp[2][text2.size()+1];
    for (int i=0;i<=text2.size();i++) dp[0][i]=0;
    dp[1][0]=0;
    // return helper(text1,text2,text1.size(),text2.size(),dp);
    for (int i=1;i<=text1.size();i++){
        for (int j=1;j<=text2.size();j++){
            if (text1[i-1]==text2[j-1]) dp[i&1][j]=(1+dp[(i-1)&1][j-1]);
            else dp[i&1][j]=max(dp[(i-1)&1][j],dp[i&1][j-1]);
        }
    }
    return max(dp[0][text2.size()],dp[1][text2.size()]);
}

int main(){
    
}