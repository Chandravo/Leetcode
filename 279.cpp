//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int numSquares(int n) {
    vector<int> dp(n+1,INT_MAX);
    dp[0]=0;
    int i=1;
    while (i*i<=n){
        int s=i*i;
        for (int j=s;j<=n;j++){
            dp[j]=min(dp[j-s]+1,dp[j]);
        }
        i++;
    }
    return dp[n];
    
}
// int numSquares(int n) {
//     int sq=sqrt(n);
//     if (sq*sq==n) return 1;
//     vector<int> sqs(sq);
//     for (int i=1;i<=sq;i++){
//         sqs[i-1]=i*i;
//     }        
//     int dp[2][n+1];
//     for (int i=0;i<=n;i++) dp[0][i]=INT_MAX-1;
//     for (int i=0;i<1;i++) dp[i][0]=0;

//     for (int i=1;i<=sq;i++){
//         for (int j=1;j<=n;j++){
//             if (sqs[i-1]<=j){
//                 dp[i&1][j]=min(1+dp[i&1][j-sqs[i-1]],dp[(i-1)&1][j]);
//             }
//             else{
//                 dp[i&1][j]=dp[(i-1)&1][j];
//             }
//         }
//     }
//     return min(dp[0][n],dp[1][n]);
    
// }

int main(){
    
}