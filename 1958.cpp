//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int direction[8][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1},
                               {1, 1}, {-1, -1}, {1, -1}, {-1, 1}}; 

bool helper(vector<vector<char>> &b,int r,int c, char color, int dir){
    r=r+direction[dir][0];
    c=c+direction[dir][1];

    int cnt=1;
    while (r>=0 && c>=0 && r<b.size() && c<b[0].size()){
        if (b[r][c]=='.') return false;
        if (b[r][c]==color) return (cnt>=3);
        cnt++;
        r=r+direction[dir][0];
        c=c+direction[dir][1];
    }
    return false;
}

bool checkMove(vector<vector<char>>& board, int rMove, int cMove, char color) {
    for (int i=0;i<8;i++){
        if (helper(board,rMove,cMove,color,i)) return true;
    }
    return false;

}

int main(){
    
}