//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;
int maxSubArray(vector<int>& nums) {
    int maxSum=nums[0];
    int curSum=0;
    for (int i:nums){
        if (curSum<0){
            curSum=0;
        }
        curSum+=i;
        maxSum=max(maxSum,curSum);
    }  
    return maxSum;
}
int main(){
    vector<int> nums{5,4,-1,7,8};
    cout<<maxSubArray(nums);
}