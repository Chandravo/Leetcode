//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;
void nextPermutation(vector<int>& nums) {
    int i1=-1,i2=-1;
    for (int i=nums.size()-1;i>0;i--){
        if (nums[i]>nums[i-1]){
            i1=i-1;
            break;
        }
    }  
    // cout<<i1<<endl;      
    if (i1==-1){
        // cout<<"helo"<<endl;
        sort(nums.begin(),nums.end());
        return;
    }
    for (int i=nums.size()-1;i>0;i--){
        if (nums[i]>nums[i1]){
            i2=i;
            break;
        }
    }
    // cout<<i2<<endl;
    swap(nums[i1],nums[i2]);
    sort(nums.begin()+i1+1,nums.end());


}
int main(){
    vector<int> nums{3,2,6,4,1};
    nextPermutation(nums);
    for (int i:nums){
        cout<<i<<"";
    }
}