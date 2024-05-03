//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int longestIdealString(string s, int k) {
    int n = s.size();
    unordered_map<char,int> mp;
    int res = 0;
    for (int i=n-1;i>=0;i--){
        //search front
        char curr = s[i];
        int mx = 0;
        while (abs(curr-s[i])<=k && curr<='z'){
            if (mp.count(curr)) mx = max(mx, mp[curr]);
            curr++;
        }
        curr = s[i];
        while (abs(curr-s[i])<=k && curr>='a'){
            if (mp.count(curr)) mx = max(mx, mp[curr]);
            curr--;
        }
        mp[s[i]] = mx+1;
        res = max(res, mx+1);
    }        
    return res;
}

int main(){
    
}