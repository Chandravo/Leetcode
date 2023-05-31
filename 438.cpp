//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

bool check0(vector<int> &hsh){
    for (int i:hsh){
        if (i!=0) return false;
    }
    return true;
}

vector<int> findAnagrams(string s, string p) {
    vector<int> res;
    vector<int> hsh(26,0);
    for (char i:p){
        hsh[i-'a']++;
    }        
    int i=0;
    for (int j=0;j<s.size();j++){
        if (j-i+1>p.size()){
            hsh[s[i]-'a']++;
            i++;
        }
        hsh[s[j]-'a']--;
        if (check0(hsh)) res.push_back(i);
    }
    return res;
}

int main(){
    
}