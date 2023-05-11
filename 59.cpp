//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> generateMatrix(int n) {
    int t=0,b=n-1,l=0,r=n-1;
    int num=1;
    vector<vector<int>> res(n,vector<int> (n));
    while (t<=b && l<=r){
        for (int i=l;i<=r;i++){
            res[t][i]=num;
            num++;
        }
        t++;
        for (int i=t;i<=b;i++){
            res[i][r]=num;
            num++;
        }
        r--;
        for (int i=r;i>=l;i--){
            res[b][i]=num;
            num++;
        }
        b--;
        for (int i=b;i>=t;i--){
            res[i][l]=num;
            num++;
        }
        l++;
    }   
    return res;     
}

int main(){
    
}