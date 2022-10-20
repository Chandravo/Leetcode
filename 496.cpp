//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    unordered_map<int,int> pp;
    vector<int> ans;
    for(int i:nums1){
        pp[i]=-1;
    }        
    stack<int> ppp;
    for(int i=0;i<nums2.size();i++){
        while (!ppp.empty() && nums2[i]>ppp.top()){
            pp[ppp.top()]=nums2[i];
            ppp.pop();
        }
        if (pp.find(nums2[i])!=pp.end()){
            ppp.push(nums2[i]);
        }
    }
    for (auto i:nums1){
        ans.push_back(pp[i]);
    }
    return ans;
}

int main(){
    vector<int> nums1{4,1,2};
    vector<int> nums2{1,3,4,2};
    vector<int> hehe=nextGreaterElement(nums1,nums2);
    for (int i:hehe){
        cout<<i<<" ";
    }
}