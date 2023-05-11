//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
    vector<pair<int,double>> adj[n];
    for (int i=0;i<succProb.size();i++){
        adj[edges[i][0]].push_back({edges[i][1],succProb[i]});
        adj[edges[i][1]].push_back({edges[i][0],succProb[i]});
    }
    vector<double> maxP(n+1,(double)0.0);
    priority_queue<pair<double,int>> q;
    q.push({(double)1.0,start});
    maxP[start]=1.0;
    vector<bool> visited(n,false);
    // int prevNode=-1;
    
    while (!q.empty()){
        int currNode = q.top().second;
        double currProb = q.top().first;
        q.pop();
        // visited[currNode]=true;
        // cout<<currNode<<endl;

        if (currProb<maxP[currNode] || visited[currNode]==true) continue;

        visited[currNode]=true;

        for (int i=0;i<adj[currNode].size();i++){
            int nbr = adj[currNode][i].first;
            double prob = adj[currNode][i].second;

            if (prob*currProb>maxP[nbr]){
                maxP[nbr]=prob*currProb;
                q.push({maxP[nbr],nbr});
            }
        }

        // for (auto i:maxP) cout<<i<<" ";
        // cout<<endl;
        
    }

    return maxP[end];
    
}

int main(){
    vector<vector<int>> edges{{0,1},{1,2},{0,2}};
    vector<double> succProb{0.5,0.5,0.3};
    cout<<maxProbability(3,edges,succProb,0,2)<<endl;
}