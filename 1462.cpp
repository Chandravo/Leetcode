//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

vector<bool> checkIfPrerequisite(int n, vector<vector<int>>& preq, vector<vector<int>>& qr) {
    
    vector<vector<int>> graph(n);
    vector<int> indegree(n,0);
    vector<vector<bool>> tab(n,vector<bool> (n,false));

    for (int i=0;i<preq.size();i++){
        graph[preq[i][0]].push_back(preq[i][1]);
        indegree[preq[i][1]]++;
    }
    
    // for (int i=0;i<n;i++){
    //     for (int i:graph[i]){
    //         indgr[i]++;
    //     }
    // }
    queue<int> q;
    for (int i=0;i<n;i++) {
        if (indegree[i]==0) q.push(i);
    }

    while(!q.empty()){
        int currNode = q.front();
        q.pop();
        for (auto i:graph[currNode]){
            tab[currNode][i]=true;
            for (int j=0;j<n;j++){
                if (tab[j][currNode]) tab[j][i]=true;
            }
            indegree[i]--;
            if (indegree[i]==0) q.push(i);
        }
    }
    vector<bool> res;
    for(int i=0;i<qr.size();i++) res.push_back(tab[qr[i][0]][qr[i][1]]);
    return res;

}

int main(){
    
}