//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int uniquePathsWithObstacles(vector<vector<int>>& og) {
    vector<vector<int>> dp(og.size(),vector<int> (og[0].size(),0));
    int i=0;
    while (i<og[0].size() && og[0][i]!=1) dp[0][i++]=1;
    i=0;
    while (i<og.size() && og[i][0]!=1) dp[i++][0]=1;
    for (int i=1;i<og.size();i++){
        for (int j=1;j<og[0].size();j++){
            if (og[i][j]==1) dp[i][j]=0;
            else dp[i][j]=dp[i-1][j]+dp[i][j-1];
        }
    }
    return dp[og.size()-1][og[0].size()-1];
}

int main(){
    
}