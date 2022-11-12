//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;



int findMin(vector<int>& nums) {
    if (nums.size()==1){
        return nums[0];
    }
    int l=0,r=nums.size()-1;
    while (l<r){
        int mid=l+(r-l)/2;
        if (mid!=0 && nums[mid]<nums[mid-1]){
            return nums[mid];
        }
        else if(nums[mid]>nums[r]){
            l=mid+1;
        }
        else{
            r=mid;
        }
        // cout<<l<<" "<<r<<endl;
    }
    return nums[l];
}

int main(){
    vector<int> nums{11,13,15,17};
    cout<<findMin(nums);
}