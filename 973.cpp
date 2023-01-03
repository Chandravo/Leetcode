//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;
typedef pair<double,int> pdi;

vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
    priority_queue<pdi> maxh;
    for (int i=0;i<points.size();i++){
        double dist = pow(points[i][0]*points[i][0]+points[i][1]*points[i][1],0.5);
        maxh.push(pair(dist,i));
        if (maxh.size()>k){
            maxh.pop();
        }
    }  
    vector<vector<int>> res;
    while(maxh.size()!=0){
        res.push_back({points[maxh.top().second]});
        maxh.pop();
    }  
    return res;    
}


int main(){
    
}