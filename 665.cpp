//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

bool checkPossibility(vector<int>& nums) {
    int prev=-1, curr = nums[0];
    bool done = false;
    bool ohshit = false;
    for (int i=1;i<nums.size();i++){
        if (nums[i]<curr){
            if (done){
                return false;
            }
            done = true;
            if (i==nums.size()-1 || prev==-1) {
                curr=nums[i];
                continue;
            }
            if (nums[i]>=prev) curr=nums[i];
            else if (nums[i+1]>=curr) continue;
            else if (nums[i]<prev && curr>nums[i+1]) return false;
        }
        else{
            prev=curr;
            curr=nums[i];
        }
    }        
    return true;
}

int main(){
    
}