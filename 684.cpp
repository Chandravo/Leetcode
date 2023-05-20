//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int findParent(vector<int> &un, int x){
    cout<<x<<" "<<un[x]<<endl;
    if (un[x]==-1) return x;
    return un[x]=findParent(un,un[x]);
}

bool union_set(vector<int> &un, vector<int> &rank, int x, int y){
    int rx = findParent(un,x);
    int ry = findParent(un,y);
    if (rx==ry) return false;
    if (rank[rx]>rank[ry]){
        un[ry]=rx;
        rank[rx]+=rank[ry];
    }
    else {
        un[rx]=ry;
        rank[ry]+=rank[rx];
    }
    return true;
}

vector<int> findRedundantConnection(vector<vector<int>>& edges) {
    vector<int> un(edges.size()+1,-1);
    vector<int> rank(edges.size()+1,0);
    cout<<"union :"<<endl;
    for (int i:un) cout<<i<<" ";
    cout<<endl;
    for (int i=0;i<edges.size();i++){
        cout<<"hello";
        if (!union_set(un,rank,edges[i][0]-1,edges[i][1]-1)) return {edges[i][0],edges[i][1]};
    }
    return {-1,-1};
}

int main(){
    vector<vector<int>> e{{1,2},{1,3},{2,3}};
    cout<<"done\n";
    for (auto i : findRedundantConnection(e)) cout<<i<<" ";
    cout<<endl;
}