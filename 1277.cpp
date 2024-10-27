//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int countSquares(vector<vector<int>>& m) {

    int res = 0;
    for (int i=0;i<m.size();i++){
        for (int j = 0;j<m[i].size();j++){
            if (m[i][j]==0) continue;
            // if (i!=0 && j!=0 && m[i][j-1]>0 && m[i-1][j]>0 && m[i-1][j-1]>0){
            //     m[i][j] = m[i-1][j-1]+1;
                
            // }
            if (i!=0 && j!=0){
                m[i][j]+=min(m[i-1][j-1],min(m[i-1][j], m[i][j-1]));
            }
            res = res+m[i][j];
        }
    }


    for (auto i:m){
        for (auto j:i) cout<<j<<" ";
        cout<<endl;
    }
    return res;
}

int main(){
    vector<vector<int>> v{
    {1, 1, 1, 1},
    {1, 1, 1, 1},
    {1, 1, 1, 1},
    {0, 1, 1, 1}
};

    cout<<countSquares(v)<<endl;
}