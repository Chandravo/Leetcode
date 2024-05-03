//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int minimumLength(string s) {
    int l = 0, r = s.size()-1;
    while (l<r){
        auto curr = s[l];
        if(s[l]==s[r]){
            while (l<r && s[l]==curr) l++;
            while (l<r && s[r]==curr) r--;
        }
        else break;
    }        
    return r-l;
}

int main(){
    
}