//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> findWinners(vector<vector<int>>& matches) {
    set<int> w;
    map<int,int> l;
    for (auto i:matches){
        w.insert(i[0]);
        l[i[1]]++;
    } 
    vector<vector<int>> res(2);       
    for (auto i:w){
        if (!l.count(i))res[0].push_back(i);
    }
    for (auto i:l){
        if (i.second==1)res[1].push_back(i.first);
    }
    return res;
}

int main(){
    
}