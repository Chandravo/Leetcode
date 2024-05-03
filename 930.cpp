//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;


int atMostGoal(vector<int> &nums, int goal){
    int i=0,j=0,res=0;
    while (j<nums.size()){
        goal-=nums[j];
        while (goal<0){
            goal+=nums[i];
            i++;
        }
        res += j-i+1;
    }
    return res;
}

int numSubarraysWithSum(vector<int>& nums, int goal) {
    return atMostGoal(nums,goal) - atMostGoal(nums,goal-1); 
}

int main(){
    
}