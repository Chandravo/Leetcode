//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    
    vector<int> ans(nums.size(),0);
    int i=0,j=nums.size()-1;
    int curr=0;
    while (i<=j){
        ans[curr]=nums[i];
        i++;curr++;
        if (i<=j) ans[curr]=nums[j];
        j--;curr++;
    }     
    return ans;
}

int main(){
    
}