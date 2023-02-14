//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int minimumDifference(vector<int>& nums) {
    int n=nums.size();
    int sum_net=accumulate(nums.begin(),nums.end(),0);
    int sum=sum_net/2;
    cout<<sum_net<<" "<<sum<<endl;
    // vector<vector<bool>> dp(n+1,vector<bool> (sum+1));
    bool dp[n+1][sum+1];

    for (int i=0;i<=sum;i++) dp[0][i]=false;
    for (int i=0;i<=n;i++) dp[i][0]=true;

    for (int i=1;i<=n;i++){
        for (int j=1;j<=sum;j++){
            if (nums[i-1]<=j){
                dp[i][j]=dp[i-1][j-nums[i-1]] || dp[i-1][j];
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    for (int i=0;i<=n;i++){
        for (int j=0;j<=sum;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }

    for (int i=sum;i>=0;i--){
        if (dp[n][i]) return sum_net-2*i;
    }
    return 0;

}

int main(){
    vector<int> nums{1,4};
    cout<<minimumDifference(nums);
}