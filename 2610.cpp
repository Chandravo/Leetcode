//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> findMatrix(vector<int>& nums) {
    unordered_map<int,int> mp;
    vector<vector<int>> res;
    for (int i:nums){
        mp[i]++;
        if (mp[i]>=res.size()) res.push_back({i});
        else res[mp[i]-1].push_back(i);
    }

    
    return res;
}
// vector<vector<int>> findMatrix(vector<int>& nums) {
//     unordered_map<int,int> mp;
//     for (int i:nums) mp[i]++;
//     vector<vector<int>> res;
//     while(!mp.empty()){
//         vector<int> temp;
//         vector<int> rem;
//         for (auto i:mp){
//             temp.push_back(i.first);
//             i.second--;
//             // rem.push_back(i.first);
//             if (i.second==0) rem.push_back(i.first);
//         }
//         for (auto i:rem) mp.erase(i);
//         res.push_back(temp);
//     }     
//     return res;
// }

int main(){
    
}