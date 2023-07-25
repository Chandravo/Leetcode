//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;


void helper(vector<int> &cnt, vector<vector<int>> &dp,string &s,int i,int j, bool a){
    if (i<0 || j<0 || i>=s.size() || j>=s.size() || i>j || dp[i][j]!=-1) return;
    // if (a) cnt[s[j]-'a']++;
    cnt[s[j]-'a']++;
    int mx=INT_MIN,mn=INT_MAX;
    for (int i:cnt){
        if (i!=0){
            mx=max(i,mx);
            mn=min(i,mn);
        }
    }
    cout<<"i = "<<i<<" j = "<<j<<" mx = "<<mx<<" mn = "<<mn<<endl;
    for (int i:cnt) cout<<i<<" ";
    cout<<endl;
    dp[i][j]=mx-mn;
    helper(cnt,dp,s,i,j+1,1);
    cnt[s[i]-'a']--;
    helper(cnt,dp,s,i+1,j+1,0);
    cnt[s[i]-'a']++;
    cnt[s[j]-'a']--;
    return;

}

int largestVariance(string s) {
    vector<vector<int>> dp(s.size(),vector<int> (s.size(),-1));
    vector<int> cnt(26,0);
    helper(cnt,dp,s,0,0,1);
    int res=0;
    for (auto i:dp){
        for (auto j:i) {
            res=max(res,j);
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return res;
}

int main(){
    cout<<largestVariance("aababbb")<<endl;
}