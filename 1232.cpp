//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;
#define inf 1000000007
bool checkStraightLine(vector<vector<int>>& c) {
    if (c.size()==2) return true;
    double m;
    if (c[1][0]!=c[0][0]) m=(double)(c[1][1]-c[0][1])/(double)(c[1][0]-c[0][0]);
    else m=inf;
    
    for (int i=2;i<c.size();i++){
        if (c[i][0]-c[i-1][0]==0){
            if (m==inf) continue;
            else return false;
        }
        else if (((double)(c[i][1]-c[i-1][1])/(double)(c[i][0]-c[i-1][0]))!=m) return false;
    }        
    return true;
}

int main(){
    vector<vector<int>> c{{0,0},{0,1},{0,-1}};
    cout<<checkStraightLine(c)<<endl;
}