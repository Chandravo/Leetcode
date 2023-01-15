//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int n) {
    for (int i=0;i<31;i++){
        if (pow(2,i)==n){
            return true;
        }
    }
    return false;
}

bool isPowerOfTwo(int n) {
    while (n){
        if (n%2==0 || n==1) n=n/2;
        else return false;
    }
    return true;
}

bool isPowerOfTwo(int n){
    return (n==0 || !(n & (n-1)));
}

int main(){
    
}