//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int maxSubarraySumCircular(vector<int>& nums) {
    int gmax=nums[0];
    int cmax=0;
    int gmin=nums[0];
    int cmin=0;
    int net=0;
    for (int i=0;i<nums.size();i++){
        cmax=max(cmax+nums[i],nums[i]);
        gmax=max(gmax,cmax);
        cmin=min(cmin+nums[i],nums[i]);
        gmin=min(gmin,cmin);
        net+=nums[i];
    }
    if (gmax<=0) return gmax;
    return max(gmax,net-gmin);
}

int main(){
    vector<int> nums{5,-3,5};
    cout<<maxSubarraySumCircular(nums)<<endl;
}