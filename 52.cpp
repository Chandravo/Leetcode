//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

unordered_set<int> col;
unordered_set<int> dup;
unordered_set<int> ddn;

unordered_set<int> col;
unordered_set<int> dup;
unordered_set<int> ddn;

int total = 0;

void helper(int start, int &n){
    if (start==n){
        // res.push_back(b);
        total++;
        return;
    }
    for (int i=0;i<n;i++){
        if (col.find(i)!=col.end() || dup.find(start+i)!=dup.end() || ddn.find(start-i)!=ddn.end()) continue;

        col.insert(i);
        dup.insert(start+i);
        ddn.insert(start-i);
        // b[start][i]='Q';
        
        helper(start+1,n);

        col.erase(i);
        dup.erase(start+i);
        ddn.erase(start-i);
        // b[start][i]='.';
    }
}

int totalNQueens(int n) {
    // vector<vector<string>> res;
    // vector<string> board(n,string(n,'.'));
    helper(0,n);
    // cout<<total<<endl;
    return total;
}

int main(){
    
}