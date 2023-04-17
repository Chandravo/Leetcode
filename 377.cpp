//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int dp[1001];
    int solve(vector<int>& nums, int sum, int ans){
        if(sum==0){
          return 1;
        }
        if(sum<0) return 0;
        if(dp[sum] != -1){
            return dp[sum];
        }
        int cnt=0;
        for(int i=0; i<nums.size(); i++){
           cnt+=solve(nums, sum-nums[i],ans);
        }
           dp[sum]=cnt; ans+=cnt;
        return ans;
    }

    int combinationSum4(vector<int>& nums, int n) {
        memset(dp, -1, sizeof(dp));
       return solve(nums, n, 0);
      
    }

// int combinationSum4(vector<int>& c, int a) {
//     int n=c.size();
//     unsigned int dp[n+1][a+1];
//     for (int i=0;i<=a;i++) dp[0][i]=0;
//     for (int i=0;i<=n;i++) dp[i][0]=1;
//     for (int i=1;i<=n;i++){
//         for (int j=1;j<=a;j++){
//             if (c[i-1]<=j){
//                 dp[i][j]=dp[i][j-c[i-1]]+dp[i-1][j];
//             }
//             else{
//                 dp[i][j]=dp[i-1][j];
//             }
//         }
//     }        
//     return dp[n][a];        
// }

int main(){
    
}