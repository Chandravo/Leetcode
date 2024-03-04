//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
    vector<vector<int>> g(n, vector<int> (n,-1));
    for (auto &i:flights){
        g[i[0]][i[1]] = i[2];
    }    

    queue<pair<int,int>> q;
    q.push({src,0});
    unordered_set<int> s;

    s.insert(src);
    while (k-- && !q.empty()){
        auto curr = q.front();
        q.pop();
        for (int i=0;i<n;i++){
            if (g[curr.first][i]!=-1) 
        }
    }    
}

int main(){
    
}