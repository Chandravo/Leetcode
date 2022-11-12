//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    vector<int> ans;
    if (nums1.size()==0 || nums2.size()==0){
        return ans;
    }    
    unordered_map<int,int> f;
    for (int i=0;i<nums1.size();i++){
        f[nums1[i]]++;
    }
    for(int i=0;i<nums2.size();i++){
        if(f.find(nums2[i])!=f.end() && f[nums2[i]]){
            f[nums2[i]]--;
            ans.push_back(nums2[i]);
        }
    }
    return ans;
}

int main(){
    
}