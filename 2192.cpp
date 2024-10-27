//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;


vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
    vector<int> dsu(n,-1);
    for (auto &i:edges){
        dsu[i[2]] = i[1];
    }
    vector<vector<int>> res;
    for (int i=0;i<n;i++){
        vector<int> t;
        int curr = i;
        while (dsu[curr]!=-1){
            t.push_back(dsu[curr]);
            curr = dsu[curr];
        }
        t.push_back(curr);
        reverse(t.begin(), t.end());
        res.push_back(t);
    }
    return res;
}

int main(){
    
}