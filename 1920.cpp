//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

vector<int> buildArray(vector<int>& nums) {
    vector<int> res(nums.size());
    for (int i=0;i<nums.size();i++){
        res[i]=nums[nums[i]];
    }
    return res;

}

int main(){
    
}