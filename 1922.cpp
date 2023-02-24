//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;



int countGoodNumbers(long long n) {
    unsigned int mod=1e9+7;
    long long m=n/2;
    int res=1;
    long long temp=4;
    while (m!=0){
        if (m&1) res=((res%mod)*temp)%mod;
        m=m>>1;
        temp=((temp%mod)*(temp)%mod)%mod;
    }
    temp=5;
    m=n-n/2;
    while (m!=0){
        if (m&1) res=((res%mod)*temp)%mod;
        m=m>>1;
        temp=((temp%mod)*(temp)%mod)%mod;
    }
    return res;
}

int main(){
    
}