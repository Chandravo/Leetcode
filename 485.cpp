//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int res=0;
    int curr=0;
    int i=0;
    while (i<nums.size()){
        while (i<nums.size() && nums[i]==1){
            curr++;
            i++;
        }
        res=max(curr,res);
        i++;
        curr=0;
    }        
    return res;
}

int main(){
    
}