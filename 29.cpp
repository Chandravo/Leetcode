//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

// int divide(int dividend, int divisor) {
//     int res=0;
//     bool flag=false;
//     if ((dividend>0 && divisor>0) || (dividend<0 && divisor<0)) flag=true;
//     if (dividend<0) dividend*=-1;
//     if (divisor<0) divisor*=-1;
//     cout<<dividend<<" "<<divisor;
//     while (abs(dividend)>=abs(divisor)){
//         dividend-=divisor;
//         res++;
//     }        
//     if (flag) return res;
//     return res*-1;
// }

int divide(int dividend, int divisor) {
    
    if(dividend==INT_MIN && divisor==-1) return INT_MAX;
    if(dividend==INT_MIN && divisor==1) return INT_MIN;

    long int dd = abs(dividend), dr = abs(divisor);
    int res=0;
    while(dr<=dd) {
        long int mul=dr, tmp=1;
        while(mul<=dd-mul) {
            mul+=mul;
            tmp+=tmp;
        }
        res+=tmp;
        dd-=mul;
    }
    if((dividend<0&&divisor>0) || (dividend>0&&divisor<0)) return -res;
    
    return res;
    
}

int main(){
    cout<<divide(-2147483648,-1)<<endl;   
}