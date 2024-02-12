//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<pair<int,int>> dp(nums.size()); //(value,idx)
        int n = nums.size();
        int res = 0;
        int res_ind = -1;
        for(int i=0;i<n;i++){
            int curr = 1;
            int ind = -1;
            for (int j = 0;j<i;j++){
                if (nums[i]%nums[j]==0){
                    if (dp[j].first+1>curr){
                        curr = dp[j].first+1;
                        ind = j;
                    }
                }
            }
            dp[i] = {curr, ind};
            if (curr>res){
                res = curr;
                res_ind = i;
            }
        }
        // for (auto i:dp){
        //     cout<<i.first<<" "<<i.second<<endl;
        // }
        // cout<<"res_ind = "<<res_ind<<endl;
        // cout<<"res = "<<res<<endl;
        vector<int> ans;
        int i = res_ind;
        while (i!=-1){
            ans.push_back(nums[i]);
            i = dp[i].second;
        }
        return ans;
    }

int main(){
    
}