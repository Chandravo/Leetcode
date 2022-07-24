//This code is made by Chandravo Bhattacharya
// We can do it by bucket sort or count sort, it will have O(n) complexity but it will require traversing the array 2 times
// So we do it using this method which requires only 1 traversal
#include<bits/stdc++.h>
using namespace std;
void sortColors(vector<int>& nums) {
    int l=0,i=0;
    int r=nums.size()-1;
    while (i<=r){
        if (nums[i]==0){
            swap(nums[i],nums[l]);
            l++;
        }
        else if (nums[i]==2){
            swap(nums[i],nums[r]);
            r--;
            i--;
        }
        i++;
    }

}
int main(){
    vector<int> nums{0,0,1,2,2,1,1,0,2,1,0,2,0,2,0,1};
    sortColors(nums);
    for (int i:nums){
        cout<<i<<" ";
    }
}