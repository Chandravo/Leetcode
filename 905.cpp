//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;
vector<int> sortArrayByParity(vector<int>& nums) {
    int l=0;
    int r=nums.size()-1;
    for (int i=0;i<=r;i++){
        if (nums[i]%2==0){
            swap(nums[i],nums[l]);
            l++;
        }
    }
    return nums;

}
int main(){
    vector<int> nums{3,1,2,4};
    for (int i:sortArrayByParity(nums)){
        cout<<i<<" ";
    }
}