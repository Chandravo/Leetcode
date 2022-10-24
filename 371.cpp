//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int getSum(int a, int b) {
    while (b!=0){
        int carry=a&b;
        a=a^b;
        b=(unsigned)carry<<1;
    }        
    return a;
}

int main(){
    
}