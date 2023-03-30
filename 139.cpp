//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

bool wordBreak(string s, vector<string>& word) {
    unordered_set <string> used(word.begin(),word.end());
    vector<bool> dp(s.size()+1,0);
    dp[0]=1;
    for (int i=1;i<=s.size();i++){
        if (!dp[i]) continue;
        for (int j=i+1;j<s.size();j++){
            if (used.find(s.substr(i,j-i))!=used.end()){
                dp[i]=1;
            }
        }
    }        
    return dp[s.size()];
}

int main(){
    
}