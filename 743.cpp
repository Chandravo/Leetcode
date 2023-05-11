//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int networkDelayTime(vector<vector<int>>& times, int n, int k) {
    vector<pair<int,int>> adj[n+1];
    for (int i=0;i<times.size();i++){
        adj[times[i][0]].push_back({times[i][1],times[i][2]});   
    }        
    vector<int> received(n+1,INT_MAX);
    priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>> q;
    q.push({0,k});
    received[k]=0;
    while (!q.empty()){
        int node = q.top().second;
        int node_time = q.top().first;
        q.pop();

        if (node_time>received[node]) continue;

        for (int i=0;i<adj[node].size();i++){
            int nbr=adj[node][i].first;
            int time = adj[node][i].second;
            
            if (node_time+time<received[nbr]){
                received[nbr]=node_time+time;
                q.push({received[nbr],nbr});
            }
        }
    }
    int res = *max_element(received.begin()+1,received.end());
    return (res==INT_MAX)? -1:res;
}

int main(){
    
}