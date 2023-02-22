//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& nums) {
    vector<int> b(32,0);
    for (int i:nums){
        for (int j=0;j<32;j++){
            b[j]+=(i&1);
            i=i>>1;
        }
    }
    int res=0,p=1;
    for (int i=0;i<32;i++){
        if (b[i]%3!=0){
            res=res|(1<<i);
        }
    }
    return res;
}

int main(){
    vector<int> nums{0,1,0,1,0,1,99};
    cout<<singleNumber(nums)<<endl;
}