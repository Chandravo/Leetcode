//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int snakesAndLadders(vector<vector<int>>& board) {
    int n = board.size();
    vector<int> b(n*n);
    bool lr=true;
    int ind=0;
    for (int i=n-1;i>=0;i--){
        if (lr){
            for (int j=0;j<n;j++){
                b[ind]=board[i][j];
                ind++;
            }
            lr=false;
        }
        else{
            for (int j=n-1;j>=0;j--){
                b[ind]=board[i][j];
                ind++;
            }
            lr=true;
        }
    }      

    vector<int> res(n*n,-1);
    queue<int> q;
    q.push(0);
    res[0]=0;
    while (!q.empty()){
        int curr=q.front();
        if (curr == (n*n)-1 ){
            return res[curr];
        }
        q.pop();
        for (int i=1;i<=6;i++){
            int next = curr+i;

            if (next>=n*n) continue;

            if (b[next]!=-1) next=b[next]-1;

            if (res[next]==-1) res[next]=res[curr]+1,q.push(next);
        }
    }
    return -1;
}

int main(){
    
}