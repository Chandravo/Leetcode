//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums) {
    unordered_map<int,int> pp;
    for (int i:nums){
        pp[i]++;
        if (pp[i]>nums.size()/2){
            return i;
        }
    }        
}

int main(){
    
}