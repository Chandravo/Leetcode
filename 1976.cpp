//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int countPaths(int n, vector<vector<int>>& roads) {
    vector<pair<int,int>> adj[n];
    for (int i=0;i<roads.size();i++){
        adj[roads[i][0]].push_back({roads[i][1],roads[i][2]});
        adj[roads[i][1]].push_back({roads[i][0],roads[i][2]});
    }        
    priority_queue
}

int main(){
    
}