//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;
int minimumDeletions(vector<int>& nums) {
    int low,high;
    int n=nums.size();
    int moves=0;
    if (nums.size()==1){
        low=0;
        high=low;
    }   
    else{
        if (nums[0]>nums[1]){
            low=1;
            high=0;
        }
        else{
            low=0;
            high=1;
        }
    }
    for (int i=2;i<nums.size();i++){
        if (nums[i]>nums[high]){
            high=i;
            continue;
        }
        if (nums[i]<nums[low]){
            low=i;
        }
    }
    // cout<<low<<" "<<high<<endl;
    // cout<<min(high,low)+1+n-max(high,low)<<endl;
    // cout<<max(high,low)+1<<endl;
    // cout<<n-min(high,low)<<endl;

    // cout<<min((min(high,low)+1+n-max(high,low)),12)
    return min({min(high,low)+1+n-max(high,low), max(high,low)+1, n-min(high,low)});
}
int main(){
    vector<int> nums{2,10,7,5,4,1,8,6};
    cout<<minimumDeletions(nums);
    
    
}