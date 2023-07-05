//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

vector<int> maximumSumQueries(vector<int>& nums1, vector<int>& nums2, vector<vector<int>>& q) {
    int n=nums1.size();        
    vector<pair<int,int>> sm(n);
    for (int i=0;i<n;i++){
        sm[i]={nums1[i]+nums2[i],i};
    }
    sort(sm.rbegin(),sm.rend());
    vector<int> res(q.size());
    for (int i=0;i<q.size();i++){
        int x=q[i][0],y=q[i][1];
        int ind=-1;
        for (int j=0;j<n;j++){
            if (sm[j].first>=x+y && nums1[sm[j].second]>=x && nums2[sm[j].second]>=y){
                ind = sm[j].first;
                break;
            }
            if (sm[j].first<x+y) break;
        }
        res[i]=ind;

    }
    return res;
}

int main(){
    
}