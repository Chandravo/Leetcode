//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int maxProduct(vector<int>& nums) {
    int minp=1,maxp=1,res=INT_MIN;
    for (int i=0;i<nums.size();i++){
        if (nums[i]<0) swap(minp,maxp);
        maxp=max(maxp*nums[i],nums[i]);
        minp=min(minp*nums[i],nums[i]);

        res=max(minp,maxp);
    }        
    return res;
}

int main(){
    
}