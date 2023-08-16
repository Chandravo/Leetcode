//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;



long long maxRunTime(int n, vector<int>& bt) {
    sort(bt.rbegin(),bt.rend());
    long long res = accumulate(bt.begin(),bt.end(),0);
    int i=0;
    while (bt[i]>res/(n-i+1)) res-=bt[i++];      
    return res/(n-i+1);
}

int main(){
    
}