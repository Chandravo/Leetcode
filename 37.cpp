//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

bool rows[10][10],cols[10][10],sbox[3][3][10];

int getSBox(int &i,int &j){
    if (i>8 || j>8 || i<0 || j<0) return -1;
    if (i<3 && j<3) return 0;
    else if (i<3 && j<6) return 1;
    else if (i<3 && j<9) return 2;
    else if (i<6 && j<3) return 3;
    else if (i<6 && j<6) return 4;
    else if (i<6 && j<9) return 5;
    else if (i<9 && j<3) return 6;
    else if (i<9 && j<6) return 7;
    else if (i<9 && j<9) return 8;
    return -1;
}

bool helper(vector<vector<char>> &b, int i,int j){
    if (i==9) return true;
    if (j==9) return helper(b,i+1,0);
    if(b[i][j] != '.') return helper(b, i, j+1);
    // int num=-1;
    for (int _=1;_<=9;_++){
        if (rows[i][_] || cols[j][_] || sbox[i/3][j/3][_]) continue;
        else {
            rows[i][_]=true;
            cols[j][_]=true;
            sbox[i/3][j/3][_]=true;
            b[i][j]='0'+_;
            if (helper(b,i,j+1)) return true;
            b[i][j]='.';
            rows[i][_]=false;
            cols[j][_]=false;
            sbox[i/3][j/3][_]=false;
        }
    }
    return false;
}

void solveSudoku(vector<vector<char>>& board) {
    for (int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if (board[i][j]!='.'){
                rows[i][board[i][j]-'0']=true;
                cols[j][board[i][j]-'0']=true;
                sbox[i/3][j/3][board[i][j]-'0']=true;
            }
        }
    }
    helper(board,0,0);
}

int main(){
    int i=8,j=4;
    cout<<getSBox(i,j)<<endl;
}