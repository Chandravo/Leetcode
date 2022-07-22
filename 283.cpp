//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;
void moveZeroes(vector<int>& nums) {
    int cnt=0;
    for(int i=0;i<nums.size();i++){
        if (nums[i]==0){
            cnt++;
            nums.erase(nums.begin()+i);
            i--;
        }
    } 
    for(int i=0;i<cnt;i++){
        nums.push_back(0);
    }       
}
int main(){
    vector<int> nums{0,1,0};
    moveZeroes(nums);
    for(auto i: nums){
        cout<<i<<" ";
    }
}