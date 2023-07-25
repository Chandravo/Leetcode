//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int minSubArrayLen(int target, vector<int>& nums) {
    int i=0,j=0;
    int res=INT_MAX,curr=0;
    while (j<nums.size()){
        curr+=nums[j];
        if (curr>=target) {
            while (curr-nums[i]>=target){
                curr-=nums[i];
                i++;
            }
            res=min(res,j-i+1);
        }
        j++;
    }       
    return (res==INT_MAX)? 0:res; 
}

int main(){
    
}