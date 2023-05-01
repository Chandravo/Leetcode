//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

unordered_set<int> terminal,visited;

bool dfs(vector<vector<int>> &graph, int i){
    if (terminal.count(i)) return true;
    if (visited.count(i)) return false;
    visited.insert(i);
    bool res=true;
    for (int i:graph[i]){
        res=res && dfs(graph,i);
    }
    if (res) terminal.insert(i);
    return res;
}

vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
    for (int i=0;i<graph.size();i++){
        if (!graph[i].size()) terminal.insert(i);
    }
    for (int i=0;i<graph.size();i++){
        if (dfs(graph,i)) terminal.insert(i);
    }
    vector<int> res;

    for (int i:terminal){
        res.push_back(i);
    }
    
    return res;
}

int main(){
    
}