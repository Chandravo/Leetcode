//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& nums) {
    int res=nums[0];
    for (int i=1;i<nums.size();i++){
        res=res ^ nums[i];
    }
    return res;
}

int main(){
    vector<int> nums={3,4,5,3,7,4,7};
    cout<<singleNumber(nums);
}