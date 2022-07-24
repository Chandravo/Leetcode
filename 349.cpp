//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;
vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    unordered_set<int> n;
    for(int i:nums1){
        n.insert(i);
    }
    
    unordered_set<int> res;
    
    for (int i:nums2){
        if (n.find(i)!=n.end()){
            res.insert(i);
        }
    }
    
   
    vector<int> ans;
    for (auto i=res.begin();i!=res.end();i++){
        ans.push_back(*i);
    }
    return ans;
}
int main(){
    vector<int> nums1{1,2,2,1};
    vector<int> nums2{2,2};
    for (int i:intersection(nums1,nums2)){
        cout<<i<<" ";
    }

}