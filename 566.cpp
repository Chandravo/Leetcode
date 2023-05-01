//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
    int m=mat.size(),n=mat[0].size();
    if (m*n!=r*c) return mat;
    vector<vector<int>> res(r,vector<int> (c));
    int r1=0,c1=0;
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            res[r1][c1]=mat[i][j];
            if (c1==c-1) c1=0,r1++;
            else c1++;
        }
    }
    return res;
}

int main(){
    
}