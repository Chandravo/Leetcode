//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int minFlips(int a, int b, int c) {
    if (a>b) return minFlips(b,a,c);
    int res=0;
    while (b){
        if ((c&1) && !((b&1) || (a&1))) res++;
        else if (!(c&1)){
            if (b&1) res++;
            if (a&1) res++;
        }
        a=a>>1;
        b=b>>1;
        c=c>>1;
    }      
    return res;
}

int main(){
    
}