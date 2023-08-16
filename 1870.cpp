//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

bool valid(vector<int> &d,double &hr, int &speed){
    double curr = 0;
    for (int i=0;i<d.size()-1;i++){
        curr+=ceil((double)d[i]/(double)speed);
    }
    curr+=(double)d[d.size()-1]/(double)speed;
    return (curr<=hr)? 1:0;
}

int minSpeedOnTime(vector<int>& dist, double hour) {
    int n =dist.size();
    if (hour<(double)n-1) return -1;
    int total = accumulate(dist.begin(),dist.end(),0L);
    int r = ceil((double)total/(double)(hour-(n-1)));
    int l=1,ans=-1;
    while (l<=r){
        int mid = l+(r-l)/2;
        if (valid(dist,hour,mid)) {
            ans=mid;
            r=mid-1;
        }
        else l=mid+1;
    }        
    return ans;
}

int main(){
    
}