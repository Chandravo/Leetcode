//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

string toHex(int num) {
    unordered_map<int,char> mp;
    for (int i=0;i<=9;i++){
        mp[i]=(char)(i+'0');
    }        
    for (int i=0;i<=5;i++){
        mp[i+10]=(char)(i+'a');
    }
    if (num==0) return "0";
    string res="";
    unsigned int n=num;
    while (n){
        res.push_back(mp[n%16]);
        n=n/16;
    }
    reverse(res.begin(),res.end());
    return res;
    
}

int main(){
    
}