//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> res;

void dfs(vector<vector<int>> &g, vector<int> tmp,int ind){
    if (ind==g.size()-1) {
        res.push_back(tmp);
        return;
    }
    for (int i:g[ind]){
        tmp.push_back(i);
        dfs(g,tmp,i);
        tmp.pop_back();
    }
}

vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
    dfs(graph,{0},0);
    return res;
}

int main(){
    

}