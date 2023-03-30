//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

// int helper(vector<int> &days, vector<int> &costs, vector<int> &dp, int ind, int endDate,int curr){
//     if (dp[ind]!=-1) return dp[ind];
//     if (ind==days.size()) {
//         return dp[ind]=curr;
//     }
//     if (days[ind]<endDate){
//         return dp[ind]=helper(days, costs,dp, ind+1, endDate, curr);
//     }
//     else{
        
//         dp[ind] = helper(days,costs,dp,ind+1,days[ind]+1,curr+costs[0]);
//         dp[ind] = min(dp[ind],helper(days,costs,dp,ind+1,days[ind]+7,curr+costs[1]));
//         return dp[ind]=min(dp[ind],helper(days,costs,dp,ind+1,days[ind]+30,curr+costs[2]));
        
//     }
// }

// int mincostTickets(vector<int>& days, vector<int>& costs) {
//     vector<int> dp(days.size()+1);
//     return helper(days,costs,dp,0,0,0);
// }

int mincostTickets(vector<int>& days, vector<int>& costs) {
    int last=*max_element(days.begin(),days.end());
    vector<int> dp(last+2,-1);
    dp[last+1]=0;

    for (int i:days) dp[i]=0;

    for (int i=last;i>=0;i--){
        if (dp[i]==-1) dp[i]=dp[i+1];
        else{
            dp[i]=dp[min(i+1,last+1)]+costs[0];
            dp[i]=min(dp[i],dp[min(i+7,last+1)]+costs[1]);
            dp[i]=min(dp[i],dp[min(i+30,last+1)]+costs[2]);
        }
    }
    return dp[0];
}

int main(){
    
}