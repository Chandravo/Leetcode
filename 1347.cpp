//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int minSteps(string s, string t) {
    int res = 0;
    unordered_map<char,int> f;
    for (auto i:s) f[i]++;
    for (auto i:t){
        if (f.find(i)==f.end() || f[i]==0) res++;
        else f[i]--;
    }                         

    return res;
}

int main(){
    
}