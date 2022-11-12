//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int subarraySum(vector<int>& nums, int k) {
    unordered_map<int,int> q;
    q[0]=1;
    int sum=0;
    int res=0;
    for (int i=0;i<nums.size();i++){
        sum+=nums[i];
        res+=q[sum-k];
        q[sum]++;
        

    }   
    return res;     
}

int main(){
    
}