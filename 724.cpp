//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int pivotIndex(vector<int>& nums) {
    int total=accumulate(nums.begin(),nums.end(),0);
    int leftsum=0;
    for (int i=0;i<nums.size();i++){
        
        if ((total-nums[i])%2==0){
            if (leftsum==(total-nums[i])/2){
                return i;
            }
        }
        leftsum+=nums[i];
    }
    return -1;
}

int main(){
    vector<int> nums{2,1,-1};
    cout<<pivotIndex(nums);
}