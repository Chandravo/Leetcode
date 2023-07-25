//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

vector<string> findRepeatedDnaSequences(string s) {
    int i=0,j=9;
    unordered_map<string,int> f;
    vector<string> res;
    while (j<s.size()){
        string temp = s.substr(i,10);
        f[temp]++;
        
        i++;j++;
    }     
    for (auto i:f){
        if (i.second>1) res.push_back(i.first);
    }   
    return res;
}

int main(){
    
}