//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    for (int i=m; i<m+n; i++){
            nums1[i]=nums2[i-m];
    }
    sort(nums1.begin(), nums1.end());
}
int main(){
    vector<int> nums1{1,2,3,0,0,0};
    // int m=nums1.size();
    int m=3;
    vector<int> nums2{2,5,6};
    int n=nums2.size();
    merge(nums1,m,nums2,n);
    for(int i:nums1){
        cout<<i<<" ";
    }
}