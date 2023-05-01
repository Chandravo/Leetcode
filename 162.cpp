//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int findPeakElement(vector<int>& nums) {
    int l=0,r=nums.size()-1;
    while (l<=r){
        if (l==r && (l==0 || l==nums.size()-1)) return l;
        int mid=l+(r-l)/2;
        if (mid==nums.size()-1) return mid;
        // cout<<mid<<endl;
        else if(mid==0 && nums[mid]<nums[mid=1]) l=1;
        else if (nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]) return mid;
        else if (nums[mid-1]>nums[mid]) r=mid-1;
        else l=mid+1;
    }
    return l;
}

int main(){
    vector<int> nums{1,2};
    cout<<findPeakElement(nums)<<endl;
}