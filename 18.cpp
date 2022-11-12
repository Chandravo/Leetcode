//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target) {
    sort(nums.begin(),nums.end());
    vector<vector<int>> ans;
    for (int i=0;i<nums.size()-3;i++){
        if (i>0 && nums[i]==nums[i-1]){
            continue;
        }
        if (nums[i]>target){
            break;
        }
        for (int j=i+1;j<nums.size()-2;j++){
            if (j!=i+1 && nums[j]==nums[j-1]){
                continue;
            }
            // int t=target-nums[i]-nums[j];
            int k=j+1,l=nums.size()-1;
            while (k<l){
                long long int s=(long long)nums[i]+(long long)nums[j]+(long long)nums[k]+(long long)nums[l];
                if (s<target){
                    k++;
                }
                else if (s>target){
                    l--;
                }
                else{
                    ans.push_back({nums[i],nums[j],nums[k],nums[l]});
                    k++;
                    while (k<l && nums[k]==nums[k+1]){
                        k++;
                    }
                }
            }
        }
    } 
    return ans;      
}

int main(){
    
}