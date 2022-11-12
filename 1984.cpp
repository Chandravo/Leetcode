//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int minimumDifference(vector<int>& nums, int k) {
    sort(nums.begin(),nums.end());
    int j=k-1;
    int mindiff=INT_MAX;
    while (j<nums.size()){
        mindiff=min(mindiff,nums[j]-nums[j-k+1]);
        j++;
    } 
    return mindiff;       
}

int main(){
    vector<int> nums{9,4,1,7};
    cout<<minimumDifference(nums,2);
}