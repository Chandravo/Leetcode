//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

double average(vector<int>& salary) {
    int minn=INT_MAX,maxx=INT_MIN,s=0;
    for (int i:salary){
        minn=min(minn,i);
        maxx=max(maxx,i);
        s+=i;
    }    
    return (double)(s-maxx-minn)/(double)(salary.size()-2);
}

int main(){
    
}