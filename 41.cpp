//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int firstMissingPositive(vector<int>& nums) {
    int n=nums.size();
    for (int i=0;i<n;i++){
        if (nums[i]<=0) nums[i]=n+1;
    }        
    for (int i=0;i<n;i++){
        if (nums[i]>n) continue;
        int ind = abs(nums[i])-1;
        nums[ind]*=-1; 
    }
    for (int i=0;i<n;i++){
        if (nums[i]>n || nums[i]<0) continue;
        else return i+1;
    }
    return n+1;
}

int main(){
    
}