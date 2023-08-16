//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

long long gridGame(vector<vector<int>>& grid) {
    int n=grid[0].size();
    cout<<"initially, the grid is"<<endl;
    for (auto i:grid){
        for (auto j:i) cout<<j<<"\t";
        cout<<endl;
    }
    vector<vector<long long>> help(2,vector<long long> (n+1));
    help[0][n]=0;
    help[1][n]=0;
    for (int i=n-1;i>=0;i--){
        help[0][i]=grid[0][i]+help[0][i+1];
        help[1][i]=grid[1][i]+help[1][i+1];
    }
    cout<<"printing hjelper"<<endl;
    for (auto i:help){
        for (auto j:i){
            cout<<j<<"\t";
        }
        cout<<endl;
    }
    int curr=0;
    cout<<"size =  "<<n<<endl;
    for (int i=0;i<n;i++){
        grid[0][i]=0;
        if (help[0][i+1]<=help[1][i]){
            cout<<"switch at "<<i<<endl;
            grid[1][i]=0;
            for (int j=i+1;j<n;j++){
                cout<<"hehe "<<j<<endl;
                grid[1][j]=0;
            }
            break;
        }
    }

    for (auto i:grid){
        for (auto j:i){
            cout<<j<<"\t";
        }
        cout<<endl;
    }
    help[0][n]=0;
    help[1][n]=0;
    for (int i=n-1;i>=0;i--){
        help[0][i]=grid[0][i]+help[0][i+1];
        help[1][i]=grid[1][i]+help[1][i+1];
    }

    long long res=0;
    for (int i=0;i<n;i++){
        res+=grid[0][i];
        if (help[0][i+1]<=help[1][i]){
            res+=grid[1][i];
            for (int j=i+1;j<n;j++){
                res+=grid[1][j];
            }
            break;
        }
    }
    for (auto i:grid){
        for (auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return res;
}

int main(){
    vector<vector<int>> g{{20,3,20,17,2,12,15,17,4,15},{20,10,13,14,15,5,2,3,14,3}};
    cout<<gridGame(g)<<endl;
}