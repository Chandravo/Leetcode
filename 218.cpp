//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int robber1(int start,int end, vector<int> &v){
    int r1=0,r2=0;
    for (int i=start;i<end;i++){
        int tmp=max(v[i]+r1,r2);
        r1=r2;
        r2=tmp;
    }
    return r2;
}

int rob(vector<int>& nums) {
    if (nums.size()==1) return nums[0];
    return max(robber1(0,nums.size()-1,nums),robber1(1,nums.size(),nums));
}

int main(){
    
}