//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int maxUncrossedLines(vector<int> &A, vector<int> &B) {
    int m = A.size(), n = B.size();
    if (m < n) return maxUncrossedLines(B, A);
    vector<int> dp(n+1,0);
    for (int i = 0; i < m; i++) {
        for (int j = 0, prev = 0, cur; j < n; j++) {
            cur = dp[j+1];
            if (A[i] == B[j]) dp[j+1] = 1+prev;
            else dp[j+1] = max(dp[j+1], dp[j]);
            prev = cur;
        }
    }
    return dp[n];
}

int main(){
    vector<int> nums1{3,3};
    vector<int> nums2{3};
    cout<<maxUncrossedLines(nums1,nums2)<<endl;
}