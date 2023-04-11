//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

long long limit = 9999999999;

bool helper(string s, long long prev, int ind, int cnt){
    if (ind==s.size()) return cnt>1;
    long long num=0;
    for (int i=ind; i<s.size();i++){
        num=num*10l + (s[i]-'0');
        if (num>limit) break;
        if (num>prev && prev!=-1) break;
        if (prev==-1 || (num-prev==-1)) {
            if (helper(s,num,i+1,cnt+1)) return true;
        }
    }
    return false;
}

bool splitString(string s) {
    if (s.size()<=1) return false;
    return helper(s,-1,0,0);
}

int main(){
    
}