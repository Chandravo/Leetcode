//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int trailingZeroes(int n) {
    int x=5;
    int res=0;
    while ((n/x)!=0){
        res+=n/x;
        x=x*5;
    }  
    return res;
}

int main(){
    
}