//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

bool helper(vector<vector<char>> &b, int i,int j, int ind, string &w){
    if (ind==w.size()-1) return true;
    b[i][j]='.';
    if (i!=0 && b[i-1][j]==w[ind+1]){
        // cout<<"a"<<endl;
        if (helper(b,i-1,j,ind+1,w)) return true;
    } 
    if (i!=b.size()-1 && b[i+1][j]==w[ind+1]){
        // cout<<"b"<<endl;
        if (helper(b,i+1,j,ind+1,w)) return true;
    }
    if (j!=0 && b[i][j-1]==w[ind+1]){
        // cout<<"c"<<endl;
        if (helper(b,i,j-1,ind+1,w)) return true;
    }
    if (j!=b[0].size()-1 && b[i][j+1]==w[ind+1]){
        // cout<<"d"<<endl;
        if (helper(b,i,j+1,ind+1,w)) return true;
    }
    b[i][j]=w[ind];
    // cout<<ind<<endl;
    return false;
}

bool exist(vector<vector<char>>& board, string word) {
    for (int i=0;i<board.size();i++){
        for (int j=0;j<board[0].size();j++){
            if (board[i][j]==word[0] && helper(board,i,j,0,word)) return true; 
        }
    }
    return false;
}

int main(){
    vector<vector<char>> board{{'A','B','C','E'},{'S','F','C','S'},{'A','D','E','E'}};
    string word="ABCB";
    cout<<exist(board,word)<<endl;
}