//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

vector<int> constructRectangle(int area) {
    int x=sqrt(area);
    if (x*x==area) return {x,x};
    vector<int> res(2,0);
    int diff=INT_MAX;
    for (int i=1;i<=x;i++){
        if (area%i==0){
            if (area/i-i<diff){
                diff=area/i-i;
                res[0]=area/i;
                res[1]=i;
            }
        }
    }       
    return res;
}

int main(){
    
}