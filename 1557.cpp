//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
    vector<int> res,indegree(n,0);
    for (int i=0;i<edges.size();i++){
        indegree[edges[i][1]]++;
    }        
    for (int i=0;i<n;i++){
        if (!indegree[i]) res.push_back(i);
    }
    return res;
}

int main(){
    
}