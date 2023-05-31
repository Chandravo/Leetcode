//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;



// void union_set (vector<int> &un,vector<int> &r, int x, int y){
//     int rx = findParent(un,x);
//     int ry = findParent(un,y);
//     if (rx!=ry){
//         if (r[x]>r[y]){
//             un[ry]=rx;
//             r[x]+=r[y];
//         }
//         else{
//             un[rx]=ry;
//             r[y]+=r[x];
//         }
//     }
// }

int findParent(vector<int> &un,int x){
    return (un[x]==-1)? x:un[x]=findParent(un,un[x]);
}

int minCostConnectPoints(vector<vector<int>>& points) {
    int n=points.size();
    vector<vector<int>> w;
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            w.push_back({abs(points[i][0]-points[j][0])+abs(points[i][1]-points[j][1]),i,j});
        }
    }
    sort(w.begin(),w.end());

    for (int i=0;i<w.size();i++){
        for (int j:w[i]) cout<<j<<" ";
        cout<<endl;
    }

    vector<int> un(n,-1);
    vector<int> r(n,0);
    int res=0,e=0;
    for (int i=0;i<w.size();i++){
        int x=findParent(un,w[i][1]),y=findParent(un,w[i][2]);
        if (x!=y){
            res+=w[i][0];
            if (r[x]>r[y]){
            un[y]=x;
            r[x]+=r[y];
            }
            else{
                un[x]=y;
                r[y]+=r[x];
            }
            e++;
            if (e==n-1) break;
        }
    }
    return res;
}

int main(){
    vector<vector<int>> points{{0,0},{2,2},{3,10},{5,2},{7,0}};
    cout<<minCostConnectPoints(points)<<endl;
}