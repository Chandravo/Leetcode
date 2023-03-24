//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;


bool helper(vector<int> &nums, vector<bool> &check, int total, int k, int ind, int curr){

    if (k==1) return true;
    if (ind>=nums.size()) return false;
    if (curr==total){
        return helper(nums,check,total,k-1 ,0,0);
    }
    for (int i=ind;i<nums.size();i++){
        if (check[i] || curr+nums[i]>total) continue;
        // if (i>0 && !check[i] && nums[i]==nums[i-1]) continue;
        check[i]=true;
        if (helper(nums,check,total,k,i+1,curr+nums[i])) return true;
        check[i]=false;
    }
    return false;
}

bool canPartitionKSubsets(vector<int>& nums, int k) {
    int total=accumulate(nums.begin(),nums.end(),0);
    if (nums.size()<k || total%k!=0) return false;
    total=total/k;
    sort(nums.begin(),nums.end(),greater<int>());
    vector<bool> check(nums.size(),false);
    return helper(nums,check,total,k,0,0);
}

int main(){
    
}