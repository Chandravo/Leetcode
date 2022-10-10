//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;
bool isValidSudoku(vector<vector<char>>& board) {
    unordered_set<string> s;
    for (int i=0;i<9;i++){
        for (int j=0;j<9;j++){
            if (board[i][j]=='.'){
                continue;
            }
            string ch(1,board[i][j]);
            string r="("+to_string(i)+")"+ch;
            string c=ch+"("+to_string(j)+")";
            string b="("+to_string(i/3)+")"+ch+"("+to_string(j/3)+")";

            if (s.find(r)!=s.end() || s.find(c)!=s.end() || s.find(b)!=s.end()){
                return false;
            }
            else{
                s.insert(r);
                s.insert(c);
                s.insert(b);
            }
        }
    }
}
int main(){
    
}