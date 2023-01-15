//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int climbStairs(int n) {
    if (n==1) return 1;
    if (n==2) return 2;
    int _=1,__=2;
    int res=0;
    for (int i=2;i<n;i++){
        res=_+__;
        _=__;
        __=res;
    }    
    return res;    
}

int main(){
    
}