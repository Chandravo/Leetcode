//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;
double myPow(double x, long long int n) {

    if (x==1 || x==0){
        return x;
    }
    if (x==-1){
        if (n%2==0){
            return x*-1;
        }
        else{
            return x;
        }
    }
    
    double power=1.0;
    for (int i=0;i<abs(n);i++){
        (n>=0)? power*=x : power/=x;

        if (floor(power*100000)==0){
            cout<<power<<"lmao"<<endl;
            return power;
        }
    }        
    return power;
}
int main(){
    cout<<myPow(2.00000,-2147483648);
    
}