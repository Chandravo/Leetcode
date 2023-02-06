//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int minCostClimbingStairs(vector<int>& c) {
    if (c.size()==2) return min(c[0],c[1]);
    int s1=c[c.size()-1],s2=0,s3=-1;
    for (int i=c.size()-2;i>=0;i--){
        s3=min(c[i]+s2,c[i]+s1);
        s2=s1;
        s1=s3;
    }        
    return min(s1,s2);
}

int main(){
    
}