//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int findMaxLength(vector<int>& nums) {
    unordered_map<int,int> mp;
    mp[0]=-1;
    int curr = 0, res = 0;
    for (int i=0;i<nums.size();i++){
        if (nums[i]==0) curr--;
        else curr++;
        if (mp.count(curr)) res = max(res, i-mp[curr]);
        else mp[curr]=i;
    }        
    return res;
}

int main(){
    
}