//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

string frequencySort(string &s) {
    map<char, int> mp;
    for (auto &i:s) mp[i]++;
    s = "";
    vector<pair<int,char>> v;
    
    for (auto &i:mp){
        v.push_back({i.second, i.first});
    } 

    sort(v.rbegin(), v.rend());
    for (auto &i:v){
        for (int j=0;j<i.first;j++){
            s+=i.second;
        }
    }
    return s;
}

int main(){
    
}