//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

long long minCost(vector<int>& nums, int x) {
    long long res=0;
    int maxshifts=0;
    vector<pair<long long,int>> ss(nums.size());
    for (int i=0;i<nums.size();i++){
        long long least=nums[i];
        int sh=0;
        for (int j=0;j<nums.size();j++){
            int shifts = (j-i>=0)? j-i:nums.size()+j-i;;
            if (nums[j]+shifts*x<=least ){
                if (nums[j]+shifts*x==least){
                    if (sh<shifts) sh=shifts;
                }
                else{
                    least = nums[j]+shifts*x;
                    sh = shifts;
                }
            }
        }
        ss[i]={least-sh*x,sh};
        maxshifts=max(sh,maxshifts);
    }        
    res+=maxshifts*(long long)x;
    for (int i=0;i<ss.size();i++){
        res+=ss[i].first;
    }
    cout<<maxshifts<<endl;
    return res;
}

int main(){
    
}