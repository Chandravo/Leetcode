//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {
    vector<int> res;
    int currn = -1;
    bool f = 1;
    int i=0;
    int j=0;
    while (nums[j]<0) j++;
    while (nums[i]>0) i++;
    while (res.size()<nums.size()){
        if (f){
            res.push_back(nums[j++]);
            while (j<nums.size() && nums[j]<0) j++;
        }
        else{
            res.push_back(nums[i++]);
            while (i<nums.size() && nums[i]>0) i++; 
        }
        f = (!f);
    }       
    return res;

}

int main(){
    
}