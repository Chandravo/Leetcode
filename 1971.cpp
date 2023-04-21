//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
    vector<int> adj[n];
    for (int i=0;i<edges.size();i++){
        adj[edges[i][0]].push_back(edges[i][1]);
        adj[edges[i][1]].push_back(edges[i][0]);
    }        
    vector<bool> v(n,0);
    queue<int> q;
    q.push(source);
    v[source]=1;
    while (!q.empty()){
        int tmp=q.front();
        q.pop();
        if (tmp==destination) return true;
        for (int i:adj[tmp]){
            if (!v[i]){
                q.push(i);
                v[i]=1;
            }

        }
    }
    return false;
}

int main(){
    
}