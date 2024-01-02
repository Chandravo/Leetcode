//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> groupThePeople(vector<int>& gs) {
    unordered_map<int,int> mp;
    vector<vector<int>> res;
    for (int i=0;i<gs.size();i++){
        if (gs[i]==1) res.push_back({i});
        else{
            if (mp.find(gs[i])==mp.end() || res[mp[gs[i]]].size()>=gs[i]){
                res.push_back({i});
                mp[gs[i]]=res.size()-1;
            }
            else{
                res[mp[gs[i]]].push_back(i);
            }
        }
    }
    return res;
}

int main(){
    
}