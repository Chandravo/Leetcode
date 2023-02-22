//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int singleNonDuplicate(vector<int>& nums) {
    int l=0,r=nums.size()-1;
    while (l<=r){
        int mid = l+(r-l)/2;
        if (mid!=0 && mid!=nums.size()-1){
            if (nums[mid+1]!=nums[mid] && nums[mid-1]!=nums[mid]) return nums[mid];
            // int left=0,right=0;
            if (nums[mid-1]==nums[mid]){
                // left=mid-l-1;
                // right=r-mid;
                if ((mid-l-1)%2!=0){
                    r=mid-2;
                }
                else if ((r-mid)%2!=0){
                    l=mid+1;
                }
                continue;
            }
            else if (nums[mid+1]==nums[mid]){
                // left=mid-l;
                // right=r-mid+1;
                if ((mid-l)%2!=0){
                    r=mid-1;
                }
                else if ((r-mid+1)%2!=0){
                    l=mid+2;
                }
                continue;
            }
        }
        return nums[mid];
    }   
    return 0;     
}

int main(){
    vector<int> nums{3,3,7,7,10,11,11};
    cout<<singleNonDuplicate(nums)<<endl;
}