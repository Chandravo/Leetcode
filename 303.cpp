//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

class NumArray {
    vector<int> v;
public:
    NumArray(vector<int>& nums) {
        v.push_back(0);
        for (int i=0;i<nums.size();i++){
            v.push_back(nums[i]+v.back());
        }
    }
    
    int sumRange(int left, int right) {
        return v[right+1]-v[left];
    }
};

int main(){
    vector<int> nums{-2,0,3,-5,2,-1};
    NumArray *obj=new NumArray(nums);
    cout<<obj->sumRange(0,2)<<endl;
    cout<<obj->sumRange(2,5)<<endl;
    cout<<obj->sumRange(0,5)<<endl;
}