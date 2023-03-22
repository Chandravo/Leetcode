//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int findComplement(int num) {
    long long int m=1;
    int res=0;
    while(num){
        if (!(num&1)) res+=m;
        m*=2;
        num=num>>1;
    }        
    return res;
}

int main(){
    
}