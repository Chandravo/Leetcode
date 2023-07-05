//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int equalPairs(vector<vector<int>>& grid) {
    map<vector<int>,int> f;
    for (int i=0;i<grid.size();i++){
        f[grid[i]]++;
    }     
    int res=0;
    for (int i=0;i<grid.size();i++){
        vector<int> v(grid.size());
        for (int j=0;j<grid.size();j++){
            v[j]=grid[j][i];
        }
        if (f.find(v)!=f.end()) res+=f[v];
    }    
    return res;
}

int main(){
    
}