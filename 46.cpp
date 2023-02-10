//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> res;
    helper(res,nums,0);
    return res;
}

void helper(vector<vector<int>> &res, vector<int> &nums, int start){
    if (start==nums.size()){
        res.push_back(nums);
        return;
    }
    for (int i=start;i<nums.size();i++){
        swap(nums[i],nums[start]);
        helper(res,nums,start+1);
        swap(nums[i],nums[start]);
    }
}

int main(){
    
}