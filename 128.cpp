//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;
int longestConsecutive(vector<int>& nums) {
    unordered_set<int> s(nums.begin(),nums.end());
    int res=0;
    for(int i=0;i<nums.size();i++){
        if(s.find(nums[i]-1)==s.end()){
            int j=nums[i];
            while(s.find(j)!=s.end()){
                j++;
            }
            res=max(res,j-nums[i]);
        }
    }
    return res;

}
int main(){
    
}