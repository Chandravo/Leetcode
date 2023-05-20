//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

long long helper(vector<vector<int>> &q,int ind, vector<int> &dp){
    if (ind>=q.size()) return 0;
    if (dp[ind]!=-1) return dp[ind];
    long long res=0;
    for (int i=ind;i<q.size();i++){
        // res=max(res,helper(q,ind+q[i][1]+1));
        long long x = helper(q,i+q[i][1]+1,dp);
        if (x+q[i][0]>res) res=x+q[i][0];
    }
    dp[ind]=res;
    return res;
}

long long mostPoints(vector<vector<int>>& q) {
    int n=q.size();
    vector<long long> dp(q.size(),-1);
    dp[q.size()-1]=q[q.size()-1][0];
    long long res=dp[q.size()-1];
    for (int i=q.size()-2;i>=0;i--){
        if (i+q[i][1]+1>=n) dp[i]=max((long long)q[i][0],dp[i+1]);
        else dp[i]=max((long long)q[i][0]+dp[i+1+q[i][1]],dp[i+1]);
        res=max(dp[i],res);
    }
    return res;
    // return helper(q,0,dp);
} 

int main(){
    
}