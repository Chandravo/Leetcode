#include<iostream>
using namespace std;
//r^n
int power(int r,int n){
    if(n==0) return 1;
    int value = power(r,(n-1));
    return r*value;
}
int main(){   
    int n;
    cin>>n;
    int r;
    cin>>r;
    cout<<power(r,n);
    return 0;
}