//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

// bool helper(string &s1, string &s2, string &s3, short int m, short int n, short int o, int i ){
//     if (m==0 || n==0 )
// }

bool isInterleave(string s1, string s2, string s3) {
    if (s3.size()!=(s1.size()+s2.size())) return false;
    bool dp[s1.size()+1][s2.size()+1];
    dp[0][0]=true;
    for (int i=1;i<=s2.size();i++){
        dp[0][i]=dp[0][i-1] && s3[i-1]==s2[i-1];
    }
    for (int i=1;i<=s1.size();i++){
        dp[i][0]=dp[i-1][0] && s3[i-1]==s1[i-1];
    }
    
    for (int i=1;i<=s1.size();i++){
        for (int j=1;j<=s2.size();j++){
            if (s3[i+j-1]==s1[i-1] && dp[i-1][j]) dp[i][j]=true; 
            else if (s3[i+j-1]==s2[j-1] && dp[i][j-1]) dp[i][j]=true;
            else dp[i][j]=false;
        }
    }
    return dp[s1.size()][s2.size()];
}

int main(){
    cout<<isInterleave("aabcc","dbbca","aadbbcbcac" )<<endl;;
}