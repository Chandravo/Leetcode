//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

// int maxUncrossedLines(vector<int> &A, vector<int> &B) {
//     int m = A.size(), n = B.size();
//     if (m < n) return maxUncrossedLines(B, A);
//     vector<int> dp(n+1,0);
//     for (int i = 0; i < m; i++) {
//         for (int j = 0, prev = 0, cur; j < n; j++) {
//             cur = dp[j+1];
//             if (A[i] == B[j]) dp[j+1] = 1+prev;
//             else dp[j+1] = max(dp[j+1], dp[j]);
//             prev = cur;
//         }
//     }
//     return dp[n];
// }

int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
    int dp[nums1.size()+1][nums2.size()+1];
    for (int i=0;i<=nums1.size();i++){
        for (int j=0;j<=nums2.size();j++){
            if (i==0 || j==0){
                dp[i][j]=0;
                continue;
            }
            if (nums1[i-1]==nums2[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
            }
            else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }        
    return dp[nums1.size()][nums2.size()];
}

int main(){
    vector<int> nums1{1};
    vector<int> nums2{3};
    cout<<maxUncrossedLines(nums1,nums2)<<endl;
}