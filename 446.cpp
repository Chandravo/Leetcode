//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int numberOfArithmeticSlices(vector<int>& nums) {
    int res = 0;
    vector<unordered_map<int,int>> v(nums.size());
    for (int i=1;i<nums.size();i++){
        for (int j=0;j<i;j++){
            if (v[j].find(nums[i]-nums[j])==v[j].end()) v[j][nums[i]-nums[j]]=1;
            else v[j][nums[i]-nums[j]]=v[i][nums[i]-nums[j]]+1;
            if (v[j][nums[i]-nums[j]]>=2) res++;
        }
    }         
    return res;
}

int main(){
    
}