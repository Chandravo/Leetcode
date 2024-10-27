//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int rangeSum(vector<int>& nums, int n, int left, int right) {
    int mod = 1e9+7;
    vector<int> v;
    for (int i=0;i<n;i++){
        int curr = 0;
        for (int j=i;j<n;j++){
            curr=(curr+nums[j])%mod;
            v.push_back(curr);
        }
    }
    sort(v.begin(), v.end());
    // for (int i:v) cout<<i<<" ";
    // cout<<endl<<v.size()<<endl;
    long long res= 0;
    for (int i=left-1;i<right;i++) res=(res+v[i])%mod;
    return (int)res;        
}

int main(){
    vector<int> nums{1,2,3,4};
    rangeSum(nums,4,1,2);
}