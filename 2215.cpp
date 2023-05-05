//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
    unordered_set<int> s(nums1.begin(),nums1.end()),c;
    vector<vector<int>> res(2);
    for (int i:nums2){
        if (c.count(i)) continue;
        else if (s.count(i)) c.insert(i),s.erase(i);
        else res[1].push_back(i),c.insert(i);
    }        
    for (int i:s){
        res[0].push_back(i);
    }
    return res;
}

int main(){
    
}