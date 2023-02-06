//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int rob(vector<int>& nums) {
    int r1=0,r2=0;
    for (int i=0;i<nums.size();i++){
        int tmp=max(nums[i]+r1,r2);
        r1=r2;
        r2=tmp;
    }        
    return r2;
}

int main(){
    
}