//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> res;
    int l=0,t=0;
    int b=matrix.size()-1,r=matrix[0].size()-1;
    if (b==0 && r==0){
        res.push_back(matrix[0][0]);
        return res;
    }
    while (l<=r && t<=b){
        for (int i=l;i<=r;i++){
            res.push_back(matrix[t][i]);
        }
        t++;

        for (int i=t;i<=b;i++){
            res.push_back(matrix[i][r]);
        }
        r--;

        if (t<=b){
    
            for (int i=r;i>=l;i--){
        
                res.push_back(matrix[b][i]);
            }
        }
        b--;

        if (l<=r){
            for (int i=b;i>=t;i--){
                res.push_back(matrix[i][l]);
            }
        }
        l++;

    }  
    return res;      
}

int main(){
    vector<vector<int>> matrix{{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    for (int i:spiralOrder(matrix)){
        cout<<i<<" ";
    }
    
}