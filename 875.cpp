//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int minEatingSpeed(vector<int>& piles, int h) {
    int r=*max_element(piles.begin(),piles.end());
    int l=1;
    int res=r;
    while (l<=r){
        int k=(l+r)/2;
        long int time=0;
        for (int i:piles){
            time+=ceil((double)i/k);
        }
        if (time>h){
            l=k+1;
        }
        else{
            res=min(res,k);
            r=k-1;
        }
    }
    return res;
    
}

int main(){
    
}