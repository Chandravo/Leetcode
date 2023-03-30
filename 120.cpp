//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

// int helper(vector<vector<int>> &t, vector<vector<int>> &dp, int i, int j){

//     if (i==t.size()) return 0;
//     if (j<0 || j>t[i].size()) return INT_MAX;

//     if (dp[i][j]!=-1) return dp[i][j];

//     return dp[i][j]=t[i][j]+min(helper(t,dp,i+1,j),helper(t,dp,i+1,j+
//     1));
// }

// int minimumTotal(vector<vector<int>>& t) {
//     vector<vector<int>> dp(t.size(),vector<int> (t[t.size()-1].size(),-1));
//     return helper(t,dp,0,0);
// }


int minimumTotal(vector<vector<int>>& t) {
    if (t.size()==1) return t[0][0];
    vector<int> dp(t[t.size()-1].size());
    cout<<dp.size()<<endl;
    for (int i=t.size()-1;i>=0;i--){
        for (int j=0;j<t[i].size();j++){
            cout<<i<<" "<<j<<endl;
            if (i==t.size()-1) dp[j]=t[i][j];
            else dp[j]=t[i][j]+min(dp[j],dp[j+1]);
        }
    }
    return dp[0];
}


int main(){
    // vector<vector<int>> v{{2}};
    vector<vector<int>> v{{2},{3,4},{6,5,7},{4,1,8,3}};
    cout<<minimumTotal(v)<<endl;
}