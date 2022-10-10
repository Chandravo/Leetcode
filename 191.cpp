//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;
int hammingWeight(uint32_t n) {
    int res=0;
    while (n){
        n=n&(n-1);
        res++;
    }        
    return res;
}
int main(){
    
}