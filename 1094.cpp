//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

static bool comp(vector<int> l,vector<int> r){
    if (l[1]<r[1] || (l[1]==r[1] && l[2]<r[2])) return true;
    return false;
}

bool carPooling(vector<vector<int>>& trips, int capacity) {
    sort(trips.begin(),trips.end(),comp);
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> minh;
    int i=0,curr=0;
    while (i<trips.size()){
        curr+=trips[i][0];
        minh.push(pair(trips[i][2],trips[i][0]));
        while (minh.top().first<=trips[i][1]){
            curr-=minh.top().second;
            minh.pop();
        }
        if (curr>capacity) return false;
        i++;

    }     
    return true;   
}

// another way

bool carPooling(vector<vector<int>>& trips, int capacity) {
    vector<int> change(1000,0);
    for (int i=0;i<trips.size();i++){
        change[trips[i][1]]+=trips[i][0];
        change[trips[i][2]]-=trips[i][0];
    }
    int curr=0;
    for (int i:change){
        curr+=i;
        if (curr>capacity){
            return false;
        }
    }
    return true;
          
}

int main(){
    
}