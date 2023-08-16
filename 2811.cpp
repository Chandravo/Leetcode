//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

bool canSplitArray(vector<int>& nums, int m) {
    if (nums.size()<=2){
        
        return true;
    }
    for (int i=1;i<nums.size();i++){
        if (nums[i]+nums[i-1]<m) return false;
    }        
    return true;
}

int main(){
    
}