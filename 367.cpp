//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

bool isPerfectSquare(int num) {
    if (num==1){
        return 1;
    }    
    int l=1,r=num/2;
    while (l<=r){
        int mid=l+(r-l)/2;
        if (mid*mid>num){
            r=mid-1;
        }
        else if(mid*mid<num){
            l=mid+1;
        }
        else{
            return true;
        }
    }
    return false;
}

int main(){
    
}