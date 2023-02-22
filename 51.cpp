//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

unordered_set<int> col;
unordered_set<int> dup;
unordered_set<int> ddn;

void helper(vector<vector<string>> &res, vector<string> &b, int start){
    if (start==b.size()){
        res.push_back(b);
        return;
    }
    for (int i=0;i<b.size();i++){
        if (col.find(i)!=col.end() || dup.find(start+i)!=dup.end() || ddn.find(start-i)!=ddn.end()) continue;

        col.insert(i);
        dup.insert(start+i);
        ddn.insert(start-i);
        b[start][i]='Q';
        
        helper(res,b,start+1);

        col.erase(i);
        dup.erase(start+i);
        ddn.erase(start-i);
        b[start][i]='.';
    }
}

vector<vector<string>> solveNQueens(int n) {
    vector<vector<string>> res;
    vector<string> board(n,string(n,'.'));
    helper(res,board,0);
    return res;
}

int main(){
    
}