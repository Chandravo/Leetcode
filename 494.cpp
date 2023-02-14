//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int helper(vector<int> nums, int sum){
    int n=nums.size();
    // cout<<n<<endl;
    int dp[n+1][sum+1];
    dp[0][0]=1;
    for (int i=1;i<=sum;i++) dp[0][i]=0;
    for (int i=1;i<=n;i++){
        for (int j=0;j<=sum;j++){
            if (nums[i-1]<=j){
                dp[i][j] = dp[i-1][j-nums[i-1]] + dp[i-1][j];
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    // for (int i=0;i<=n;i++){
    //     for (int j=0;j<=sum;j++){
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    return dp[n][sum];
}

int findTargetSumWays(vector<int>& nums, int target) {
    if (target<0) target*=-1;
    int sum=accumulate(nums.begin(),nums.end(),0);
    // cout<<"net sum = "<<sum<<endl;
    if (target>sum) return 0;
    if ((sum-target)%2!=0) return 0;
    if (nums.size()==1) return (target>nums[0])? 1 : 0;
    int new_sum=(sum-target)/2;
    // cout<<new_sum<<endl;
    return helper(nums,new_sum);
}

int main(){
    vector<int> nums{2,107,109,113,127,131,137,3,2,3,5,7,11,13,17,19,23,29,47,53};
    int target=1000;
    cout<<findTargetSumWays(nums,target);
}