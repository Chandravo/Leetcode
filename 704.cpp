//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;
int search(vector<int>& nums, int target) {
    int l=0,h=nums.size()-1;
    while (l<=h){
        int mid=l+(h-l)/2;
        if (nums[mid]<target){
            l=mid+1;
        }
        else if (nums[mid]>target){
            h=mid-1;
        }
        else{
            return mid;
        }
    }
    return -1;
}
int main(){
    vector<int> nums{1,3,5,7,9,11};
    cout<<search(nums,7);
}