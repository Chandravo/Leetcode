//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int fib(int n) {
    if (n==0) return 0;
    if (n==1) return 1;
    int x=0,y=1;
    int res=0;
    for (int i=0;i<n-1;i++){
        res=y+x;
        x=y;
        y=res;
    }       
    return res;
}

int main(){
    cout<<fib(4)<<endl;
}