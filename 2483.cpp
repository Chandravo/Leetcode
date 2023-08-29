//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int bestClosingTime(string cu) {
    int n=cu.size();
    vector<int> N(cu.size()+1,0);
    N[0]=0;
    int prevN=0;
    int prevY=0;
    // Y[Y.size()-1]=0;
    for (int i=0;i<cu.size();i++){
        if (cu[i]=='N') {
            N[i+1]+=1+prevN;
            prevN=1+prevN;
        }
        else {
            N[i+1]+=prevN;
            
        }

        if (cu[n-1-i]=='Y') {
            N[n-i-1]+=prevY+1;
            prevY=1+prevY;
        }
        else N[n-i-1]+=prevY;
    }
    int mn = INT_MAX;
    int res=-1;
    for (int i=0;i<=n;i++){
        if (N[i]<mn){
            mn = N[i];
            res=i;
        }
    }
    return res;
}

int main(){
    
}