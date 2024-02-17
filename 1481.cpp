//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
    unordered_map<int,int> f;
    for (int &i:arr) f[i]++;
    vector<pair<int,int>> v;
    for (auto &i:f){
        v.push_back({i.second, i.first});
    }        
    sort(v.begin(), v.end());
    while (k){
        while (k-- && v.back().first--);
        if (!v.back().first) v.pop_back();
    }
    return v.size();
}

int main(){
    
}