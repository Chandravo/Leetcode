//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;
vector<int> findDuplicates(vector<int>& nums) {
    vector<int> ans;
    for (int i:nums){
        if (nums[abs(i)-1]<0){
            ans.push_back(abs(i));
        }
        else{
            nums[abs(i)-1]*=-1;
        }
    }
    // for(int i:nums){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    return ans;        
}
int main(){
    vector<int> nums{4,3,2,7,8,2,3,1};
    for (int i:findDuplicates(nums)){
        cout<<i<<" ";
    }
}