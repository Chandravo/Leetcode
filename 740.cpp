//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int deleteAndEarn(vector<int>& nums) {
    int n=*max_element(nums.begin(),nums.end());
    vector<int> dp(n+1);
    dp[0]=0;
    for (int i:nums) dp[i]+=i;
    for (int i=1;i<=n;i++){
        dp[i]=max(dp[i]+dp[i-2],dp[i-1]);
    }
    return dp[n];
}

int main(){
    vector<int> nums{2,2,3,3,3,4};
    cout<<deleteAndEarn(nums)<<endl;
}