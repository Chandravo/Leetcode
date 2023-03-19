//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

short int giveshit(string x){
    short int one=0;
    for (char i:x){
        if (i-'0'==1) one++;
    }
    return one;
}

int findMaxForm(vector<string>& strs, int m, int n) {
    vector<vector<int>> dp (m+1,vector<int> (n+1,0));
    for (string s:strs){
        short int one = giveshit(s);
        short int zero = s.size()-one;

        for (short int i=m;i>=zero;i--){
            for (short int j=n;j>=one;j--){
                dp[i][j]=max(dp[i][j],dp[i-zero][j-one]+1);

            }
        }
    }
    return dp[m][n];
}

int main(){
    
}