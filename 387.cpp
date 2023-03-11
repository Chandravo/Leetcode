//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int firstUniqChar(string s) {
    unordered_map<char,int> f;
    for (char i:s) f[i]++;
    for (int i=0;i<s.size();i++){
        if (f[s[i]]==1) return i;
    }        
    return -1;
}

int main(){
    
}