//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int helper(vector<vector<int>> &in, int &q){
    int l=0,r=in.size()-1;
    while(l<=r){
        int mid = l+(r-l)/2;
        if (in[mid][1]<q) l=mid+1;
        else if (in[mid][0]>q) r=mid-1;
        else{
            while (mid>0 && in[mid-1][0]<=q && in[mid-1][1]>=q) mid--;
            return in[mid][1]-in[mid][0]+1;
        }  
    }
    return -1;
}

vector<int> minInterval(vector<vector<int>>& intervals, vector<int>& queries) {
    vector<int> res;
    sort(intervals.begin(),intervals.end());
    for (int i:queries){
        res.push_back(helper(intervals,i));
    }
    return res;
}

int main(){
    
}