//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int maximalSquare(vector<vector<char>>& mat) {
    int m=mat.size(),n=mat[0].size();
    vector<vector<int>> dp (m, vector<int> (n,0));
    for (int i=0;i<m;i++) dp[i][n-1]=mat[i][n-1]-'0';
    for (int i=0;i<n;i++) dp[m-1][i]=mat[m-1][i]-'0';

    for (int i=m-2;i>=0;i--){
        for (int j=n-2;j>=0;j--){
            if (mat[i][j]=='1'){
                dp[i][j]=1+min({dp[i+1][j+1],dp[i+1][j],dp[i][j+1]});
            }
        }
    }
    int res=0;
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            if (res<dp[i][j]) res=dp[i][j];
        }
    }
    return res*res;
}

int main(){
    
}