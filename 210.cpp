//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> buildGraph(int &n, vector<vector<int>> &p){
    vector<vector<int>> res(n);
    for (int i=0;i<p.size();i++){
        res[p[i][1]].push_back(p[i][0]);
    }
    return res;
}

vector<int> inDegrees(vector<vector<int>> &g){
    vector<int> res(g.size(),0);
    for (int i=0;i<g.size();i++){
        for (int j=0;j<g[i].size();j++){
            res[g[i][j]]++;
        }
    }
    return res;
}

vector<int> findOrder(int n, vector<vector<int>>& p) {
    vector<vector<int>> graph = buildGraph(n,p);
    vector<int> indegree = inDegrees(graph);


    queue<int> q;
    vector<int> res;
    for (int i=0;i<graph.size();i++){
        cout<<i<<" -> ";
        for (int j=0;j<graph[i].size();j++){
            cout<<graph[i][j]<<", ";
        }
        cout<<endl;
    }

    for (int i=0;i<indegree.size();i++){
        cout<<i<<" indegree =  "<<indegree[i]<<endl;
        if (indegree[i]==0) q.push(i);
    }
    int cnt=0;
    while (!q.empty()){
        int u=q.front();
        res.push_back(u);
        q.pop();
        for (int i:graph[u]){
            indegree[i]--;
            if (indegree[i]==0) q.push(i); 
        }
        cnt++; 
    }
    if (cnt!=n) return {};
    else return res;
}

int main(){
    vector<vector<int>> p{{0,10},{3,18}};
    findOrder(2,p);
}