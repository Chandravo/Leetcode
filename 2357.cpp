//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int minimumOperations(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int res=(nums[0]!=0)? 1:0,s=nums[0];
    int high=nums[nums.size()-1];
    for (int i=1;i<nums.size();i++){
        if (s>=high) break;
        else if (nums[i]!=0) {
            // if (i!=0) nums[i]=nums[i]-nums[i-1];
            s+=nums[i]-nums[i-1];
            cout<<s<<endl;
            res+=(nums[i]==nums[i-1])? 0:1;
        }
    }    
    return res;    
}

int main(){
    
}