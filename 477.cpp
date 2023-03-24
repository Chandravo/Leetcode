//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int ham(int a, int b){
    int res=0;
    while (a || b){
        if ((a&1) != (b&1)) res++;
        a=a>>1;
        b=b>>1;
    }
    return res;
}

int totalHammingDistance(vector<int>& nums) {
    int res=0;
    for (int i=0;i<nums.size();i++){
        for (int j=i+1;j<nums.size();j++){
            res+=ham(nums[i],nums[j]);
        }
    }
    return res;
}

int main(){
    
}