//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int largestSumAfterKNegations(vector<int>& nums, int k) {
    vector<int> cnt(201,0);
    for (int i:nums) cnt[i+100]++;
    for (int i=-100;i<=0;i++){
        int tmp=min(k,cnt[i+100]);
        cnt[-i+100]+=tmp;
        cnt[i+100]-=tmp;
        k-=tmp;
    }
    if (k&1){
        int i=0;
        while (!cnt[i+100]) i++;
        cnt[-i+100]+=1;
        cnt[i+100]-=1;
    }
    int res=0;
    for (int i=-100;i<=100;i++){
        res+=cnt[i+100]*i;
    }
    return res;
}

int main(){
    
}