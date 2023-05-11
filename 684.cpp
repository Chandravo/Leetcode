//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

vector<int> findRedundantConnection(vector<vector<int>>& edges) {
    int n=edges.size();
    vector<vector<int>> adj(n);
    for (int i=0;i<n;i++){
        adj[edges[i][0]].push_back(edges[i][1]);
        adj[edges[i][1]].push_back(edges[i][0]);
    }        
    vector<bool> visited(n,false);
    queue<int> q;
    q.push(0);
    
}

int main(){
    
}