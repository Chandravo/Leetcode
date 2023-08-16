//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

class NumMatrix {
public:
    vector<vector<int>> sum;
    NumMatrix(vector<vector<int>>& matrix) {
        int m=matrix.size(),n=matrix[0].size();
        sum = vector<vector<int>> (m+1,vector<int> (n+1));
        for (int i=0;i<=m;i++){
            for (int j=0;j<=n;j++){
                if (i==0 || j==0) sum[i][j]=0;
                else sum[i][j]=matrix[i-1][j-1]+sum[i][j-1]+sum[i-1][j]-sum[i-1][j-1];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        return sum[row2+1][col2+1]+sum[row1][col1]-sum[row1][col2+1]-sum[row2+1][col1];
    }
};

int main(){
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    NumMatrix a = NumMatrix(matrix);
    for (auto i:a.sum){
        for (auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}