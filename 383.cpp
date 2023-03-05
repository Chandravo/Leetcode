//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

bool canConstruct(string ransomNote, string magazine) {
    unordered_map<char,int> m;
    for (auto i:magazine){
        m[i]++;
    }          
    for (auto i:ransomNote){
        if (m.find(i)==m.end() || m[i]==0) return false;
        m[i]--;
    } 
    return true;
}

int main(){
    
}