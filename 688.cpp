//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;


vector<pair<int,int>> direc {{-1,-2},{-2,-1},{-2,1},{-1,2},{1,2},{2,1},{2,-1},{1,-2}};


vector<vector<vector<double>>> dp;

    // Solution() {
    //     dp = vector<vector<vector<double>>>(26, vector<vector<double>>(26, vector<double>(101, -1.0)));
    // }

double knightProbability(int &n, int k, int r, int c) {
    if (r>=n || c>=n || r<0 ||c<0) return 0;
    if (dp[r][c][k]!=-1.0) return dp[r][k][c];
    double prob = 0.0;
    if (k==0) return 1;
    for (auto i:direc){
        prob+=0.125* knightProbability(n,k-1,r+i.first,c+i.second);
    }
    return dp[r][c][k]=prob;
}


int main(){
    int n=3;
    cout<<knightProbability(n,2,0,0)<<endl;
}