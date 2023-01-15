//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

bool isNStraightHand(vector<int>& hand, int groupSize) {
    map<int,int> f;
    for (int i:hand){
        f[i]++;
    }
    while (!f.empty()){
        int n=f.begin()->first;
        for (int i=0;i<groupSize;i++){
            if (f.find(n+i)==f.end() || f[n+i]==0){
                return false;
            }
            f[n+i]--;
            if (f[n+i]==0) f.erase(n+i);
        }
    }
    return true;
}

int main(){
    
}