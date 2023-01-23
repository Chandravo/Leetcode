//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int twoCitySchedCost(vector<vector<int>>& costs) {
    vector<pair<int,int>> v(costs.size());
    for (int i=0;i<costs.size();i++){
        v[i]={costs[i][1]-costs[i][0],i};
    }        
    sort(v.begin(),v.end());
    int res=0;
    for (int i=0;i<costs.size();i++){
        if (i<costs.size()/2) res+=costs[v[i].second][1];
        else res+=costs[v[i].second][0]; 
    }
    return res;
}

int main(){
    
}