//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int mySqrt(int x) {
    int i=0,j=x;
    while (i<=j){
        long long int mid=(i+j)/2;
        if (mid*mid<=x && (mid+1)*(mid+1)>x){
            return mid;
        }
        else if (mid*mid>x){
            j=mid-1;
        }
        else{
            i=mid+1;
        }
    }
    return 0;        
}

int main(){
    
}