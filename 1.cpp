//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;


vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> ans;
    unordered_map<int,int> m;
    for(int i=0;i<nums.size();i++){
        if (m.find(target-nums[i])!=m.end()){
            ans.push_back(i);
            ans.push_back(m[target-nums[i]]);
            return ans;
        }
        m[nums[i]]=i;
    }
    return ans;
}

int main(){
    vector<int> nums{3,2,4};
    int target=6;
    vector<int> res=twoSum(nums,6);
    for(auto i : res){
        cout<<i<<" ";
    }
}