//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> threeSum(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    vector<vector<int>>ans;
    
    for (int i=0;i<nums.size()-2;i++){
        if (i>0 && nums[i]==nums[i-1]){
            continue;
        }
        if (nums[i]>0){
            break;
        }
        
        int target=0-nums[i];
        int j=i+1;
        int k=nums.size()-1;
        while (j<k){
            int sum=nums[i]+nums[k]+nums[j];
            if (sum<0){
                j++;
            }
            else if (sum>0){
                k--;
            }
            else{
                ans.push_back({nums[i],nums[j],nums[k]});
                while (j<k && nums[j]==nums[j+1]){
                    j++;
                }
                j++;
                while (j < k && nums[k - 1] == nums[k]) {
                    k--;
                }
                k--;
            }
            
        }
    }
    return ans;
}
int main(){
    vector<int> nums{-1,0,1,2,-1,-4};
    vector<vector<int>> a=threeSum(nums);
    for (int i=0;i<a.size();i++){
        for (int j=0;j<a[i].size();j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
}