//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> dir{{1,0}, {-1,0}, {0,1}, {0,-1}, {1,1}, {1,-1}, {-1,1}, {-1,-1}};

bool inline neigbour(int &i, int &j, vector<vector<int>> &board){
    if (i<0 || j<0 || i>=board.size() || j>=board[1].size()) return 0;
    
    if (board[i][j]==-1) return 1;
    if (board[i][j]==-2) return 0;
    return board[i][j]; 
    
}

int inline check(vector<vector<int>> &board, int &i, int &j){
    int nh = 0;
    for (auto d:dir){
        int ni = i+d[0];
        int nj = j+d[1];
        nh+=neigbour(ni,nj,board);
    }
    if (nh<2){
        if (board[i][j]==1) return -1;
        return 0;
    }
    if (nh>=2 || nh<=3){
        if (board[i][j]==1) return 1;
        if (board[i][j]==0 && nh==3) return -2;
        return 0;
    }
    if (nh>3){
        if (board[i][j]==1) return -1;
        return 0;
    }
}

void gameOfLife(vector<vector<int>>& board) {
    for (int i=0;i<board.size();i++){
        for (int j=0;j<board[1].size();j++){
            board[i][j] = check(board, i, j);
        }
    }       
    for (int i=0;i<board.size();i++){
        for (int j=0;j<board[1].size();j++){
            if (board[i][j]==-1) board[i][j] = 0 ;
            if (board[i][j]==-2) board[i][j] = 1 ;
        }
    }       
     
}

int main(){
    
}