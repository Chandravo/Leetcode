//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

long long countSubarrays(vector<int>& nums, int k) {
    // unordered_map<int,int> mp;
    // priority_queue<int> pq;
    long long res = 0;
    int mx = *max_element(nums.begin(), nums.end());
    vector<int> pos;
    for (int i=0;i<nums.size();i++){
        if (nums[i]==mx) pos.push_back(i);
    }
    if (pos.size()<k) return 0;
    int i=0, j=k-1;
    while (j<nums.size()){
        res += (i+1L)*(nums.size()-(long long)j);
        i++;j++;
    }
    return res;
}

int main(){
    vector<int> nums{};
    countSubarrays(nums,10);
}