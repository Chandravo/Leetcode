//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int arrayPairSum(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int res=0;
    for (int i=0;i<nums.size();i+=2) res+=nums[i];
    return res;        
}

int main(){
    
}