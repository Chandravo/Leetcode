//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;


int helper(string &s, int start, vector<int> &dp){
    if (dp[start]>-1){
        // cout<<start<<endl;
        return dp[start];
    }
    // cout<<start<<endl;

    if (s[start]=='0') return dp[start]=0;
    
    dp[start]=helper(s,start+1,dp);
    if (start<s.size()-1 && (s[start]=='1' || (s[start]=='2' && s[start+1]<='6'))){
        dp[start]+=helper(s,start+2,dp);
    }

    return dp[start];
    
}

int numDecodings(string s) {
    vector<int> dp(s.size()+1,-1);
    dp[s.size()]=1;
    helper(s,0,dp);
    return max(0,dp[0]);
}

int numDecodings(string s) {
    int p = 1, pp, n = s.size();
    for(int i=n-1;i>=0;i--) {
        int cur = s[i]=='0' ? 0 : p;
        if(i<n-1 && (s[i]=='1'||s[i]=='2'&&s[i+1]<'7')) cur+=pp;
        pp = p;
        p = cur;
    }
    return s.empty()? 0 : p;   
}

int main(){
    string s="12";
    cout<<numDecodings(s)<<endl;
}