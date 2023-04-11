//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

bool hasAlternatingBits(int n) {
    bool c=n&1;
    n=n>>1;
    while (n){
        if ((n&1)==c) return false;
        c=n&1;
        n=n>>1;
    }     
    return true;   
}

int main(){
    
}