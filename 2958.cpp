//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int maxSubarrayLength(vector<int>& nums, int k) {
    unordered_map<int,int> mp;
    int i=0, j=0, res = 0;
    while (j<nums.size()){
        mp[nums[j]]++;
        while (i<j && mp[nums[j]]>k){
            mp[nums[i]]--;
            i++;
        }
        res = max(j-i+1, res);
        j++;
    }        
    return res;
}

int main(){
    
}