//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

vector<int> findErrorNums(vector<int>& nums) {
    vector<int> res;
    for (int i=0;i<nums.size();i++){
        if (nums[abs(nums[i-1])]<0) res.push_back(nums[i]);
        else nums[abs(nums[i])]*=-1;
    }        
    for (int i=0;i<nums.size();i++){
        if (nums[i]>0) {
            res.push_back(i+1);
            break;
        }
    }
    return res;
}

int main(){
    
}