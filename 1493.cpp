//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int longestSubarray(vector<int>& nums) {
    nums.push_back(0);
    for(int i:nums) cout<<i<<" ";
    cout<<endl;
    bool used = false;
    int start=-1,prev=-1;
    int res=0;
    for (int i=0;i<nums.size();i++){
        if (nums[i]==0) {
            cout<<i<<endl;
            if (!used) {
                used=true;
                prev=i;
            }
            else{
                cout<<"hehe "<<i-start-2<<endl;
                res=max(i-start-2,res);
                start=prev;
                prev=i;
            } 
        }
    }  
    return (start==-1)? nums.size()-2:res;
}

int main(){
    vector<int> nums{1,1,1,1,0,1,1};
    cout<<longestSubarray(nums)<<endl;
}