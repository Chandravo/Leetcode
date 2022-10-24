//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
    int i=0,n=intervals.size();
    vector<vector<int>> res;
    while (i<n && intervals[i][1]<newInterval[0]){
        res.push_back(intervals[i]);
        i++;
    }
    while (i<n && intervals[i][0]<=newInterval[1]){
        newInterval[0]=min(newInterval[0],intervals[i][0]);
        newInterval[1]=max(newInterval[1],intervals[i][1]);
        i++;
    }
    res.push_back(newInterval);
    while (i<n){
        res.push_back(intervals[i]);
        i++;
    }
    return res;
}

int main(){
    
}