//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;
bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> s;
    for (int i=0;i<nums.size();i++){
        if (s.find(nums[i])==s.end()){
            s.insert(nums[i]);
        }
        else{
            return true;
        }
    }
    return false;        
}
int main(){
    
}