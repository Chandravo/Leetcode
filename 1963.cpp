//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int minSwaps(string s) {
    int r=0,mr=0;
    for (char i:s){
        if (i=='['){
            r--;
        }
        else{
            r++;
        }
        mr=max(r,mr);
    }        
    return (mr+1)/2;
}

int main(){
    
}