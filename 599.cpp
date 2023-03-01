//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
    int n = list1.size(), m = list2.size();
    unordered_map<string,int> first;
    for(int i=0; i<n; ++i) first.insert({list1[i],i+1});
    vector<pair<string,int>> v;
    vector<string> ans;
    for(int i=0; i<m; ++i){
        int x = first[list2[i]];
        if(x) v.push_back({list2[i],x+i-1});
    }
    int mn = INT_MAX;
    for(auto &[x,y]: v) mn = min(mn,y);
    for(auto [s,x]: v) if(x == mn) ans.push_back(s);
    return ans;
}

int main(){
    
}