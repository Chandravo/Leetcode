//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;
vector<int> findDisappearedNumbers(vector<int>& nums) {
    vector<int> res;
    for (int i:nums){
        nums[abs(i)-1]=-1*abs(nums[abs(i)-1]);
    }        
    for (int i=0;i<nums.size();i++){
        if (nums[i]>0){
            res.push_back(i+1);
        }
    }
    return res;
}
int main(){
    
}