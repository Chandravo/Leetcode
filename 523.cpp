//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

bool checkSubarraySum(vector<int>& nums, int k) {
    unordered_map<int,int> m;
    m[0]=-1; // check [23,2,4,6,6]
    int sum=0;
    for (int i=0;i<nums.size();i++){
        sum+=nums[i];
        if (k!=0) sum%=k;
        if (m.count(sum)){
            if (i-m[sum]>1) return true;
        }
        else m[sum]=i;
    }        
    return false;
}

int main(){
    
}