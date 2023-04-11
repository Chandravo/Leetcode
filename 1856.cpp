//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

auto mod=1000000007;
int maxSumMinProduct(vector<int>& nums) {
    vector<long long unsigned int> dp(nums.size());
    dp[0]=nums[0]*nums[0];
    long long unsigned int res=0;
    long long unsigned int minn=nums[0],summ=nums[0];
    for (int i=1;i<nums.size();i++){
        if (nums[i]<minn) minn=nums[i];
        if (nums[i]*nums[i]>(minn*(summ+nums[i]))){
            dp[i]=nums[i]*nums[i];
            minn=nums[i];
            summ=nums[i];
        }
        else{
            dp[i]=minn*(summ+nums[i]);
            summ+=nums[i];
        }
        res=max(res,dp[i]);
    }        
    for (auto i:dp) cout<<i<<endl;
    cout<<endl<<endl;
    return res%mod;
}

int main(){
    vector<int> nums{2,3,3,1,2};
    cout<<maxSumMinProduct(nums)<<endl;
}