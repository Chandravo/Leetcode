//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int countPalindromicSubsequence(string s) {
    vector<pair<int,int>> f(26,{-1,-1});
    for (int i=0;i<s.size();i++){
        if (f[s[i]-'a'].first==-1) f[s[i]-'a'].first=i;
        else f[s[i]-'a'].second=i;
    }
    int res=0;
    for (int i=0;i<26;i++){
        if (f[i].second!=-1){
            unordered_set<char> tmp;
            for (int j=f[i].first+1;j<f[i].second;j++){
                tmp.insert(s[j]);
            }
            res+=tmp.size();
        }
    }
    return res;
}

int main(){
    
}