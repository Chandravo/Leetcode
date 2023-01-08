//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

static bool comp(vector<int> &l, vector<int> &r){
    if (l[0]<r[0] || (l[0]==r[0] && l[1]<r[1])) return true;
    return false;
}

vector<int> getOrder(vector<vector<int>>& tasks) {
    for (int i=0;i<tasks.size();i++){
        tasks[i].push_back(i);
    }
    sort(tasks.begin(),tasks.end(),comp);
    vector<int> res;
    long long int time=tasks[0][0];
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> minh;
    int i=0;
    while (i<tasks.size() || !minh.empty()){
        if (minh.empty() && tasks[i][0]>=time){
            time=tasks[i][1];
        }
        while (i<tasks.size() && tasks[i][0]<=time){
            minh.push(pair(tasks[i][1],tasks[i][2]));
            i++;
        }
        res.push_back(minh.top().second);
        time+=minh.top().first;
        minh.pop();
        
    }
    
    return res;
}

int main(){
    
}