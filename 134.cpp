//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
    
    
    if (accumulate(gas.begin(),gas.end(),0)<accumulate(cost.begin(),cost.end(),0)){
        return -1;
        cout<<"from here";
    }
    int res=0;
    int total=0;
    for (int i=0;i<gas.size();i++){
        total+=(gas[i]-cost[i]);
        if (total<0){
            total=0;
            res=i+1;
        }
    }
    return res;
}
int main(){
    vector<int> g{3,1,1};
    vector<int> c{1,2,2};
    cout<<canCompleteCircuit(g,c);
}