//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>>& matrix) {
    for (int i=0;i<matrix.size();i++){
        for (int j=i;j<matrix.size();j++){
            swap(matrix[i][j],matrix[j][i]);
        }
        reverse(matrix[i].begin(),matrix[i].end());
    }
}

int main(){
    vector<vector<int>> x{{1,2,3},{4,5,6},{7,8,9}};
    rotate(x);
    for (int i=0;i<x.size();i++){
        for (int j:x[i]){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}