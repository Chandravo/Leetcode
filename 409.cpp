//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int longestPalindrome(string s) {
    unordered_map<char,int> fmap;
    for (char i:s){
        fmap[i]++;
    }     
    bool x=false;   
    int res=0;
    for (auto i:fmap){
        if (i.second%2==0) res+=i.second;
        else{
            if (!x) {
                res+=i.second;
                x=true;
            }
            else res+=i.second-1;
        }
    }
    return res;
}

int main(){
    
}