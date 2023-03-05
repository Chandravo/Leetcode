//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int helper(vector<int> &nums, int t, int l,int r){
    while (l<=r){
        int mid=l+(r-l)/2;
        if (nums[mid]>=t) r=mid-1;
        else l=mid+1;
    }
    return l;
}

vector<int> searchRange(vector<int>& nums, int  t) {
    int s = helper(nums,t,0,nums.size()-1);
    int e = helper(nums,t+1,0,nums.size()-1)-1;
    // cout<<"s = "<<s<<" e = "<<e<<endl;
    if (s<nums.size() && nums[s]==t) return {s,e};
    return {-1,-1};
}

int main(){
    vector<int> nums{5,7,7,8,8,10};
    for (int i:searchRange(nums,8)) cout<<i<<" ";
    cout<<endl;
}