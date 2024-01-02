//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

// int bins(vector<int> &nums, int i, int j, int t){
//     while (i<j){
//         int mid = i+(j-i)/2;
//         int temp = nums[i]+nums[j]+nums[mid];
//         if (temp==t) return mid;
//         if (temp<t) i++;
//         else j--;
//     }
//     return i;
// }

// int threeSumClosest(vector<int>& nums, int target) {
//     sort (nums.begin(), nums.end());
//     int i=0, j=nums.size()-1;
//     int res = INT_MAX;
//     while (i<j){
//         int ind = bins(nums,i,j,target-nums[i]-nums[j]);
//         if (abs(nums[ind]-target)<res) res = abs(nums[ind]-target);
//     }
// }

int threeSumClosest(vector<int>& nums, int t) {
    sort(nums.begin(), nums.end());
    int res = INT_MAX;
    for (int i=0;i<nums.size()-2;i++){
        int start = i+1, end = nums.size() -1 ;
        while (start<end){
            if (nums[i]+nums[start]+nums[end]==t) return 0;
            int temp = nums[i]+nums[start]+nums[end];
            if (abs(res-t)>abs(temp-t)) res = temp;
            if (temp>t) end--;
            else start++;
        }
    }
    return res;     
}

int main(){
    
}