//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int numberOfBeams(vector<string>& bank) {
    int lastrow = -1;
    int lastno = 0;
    int res = 0;
    for (int i=0;i<bank.size();i++){
        int curr = 0;
        for (auto &j:bank[i]){
            if (j=='1') curr++; 
        }
        if (curr==0) continue;
        res+=curr*lastno;
        lastno = curr;
        lastrow = i;
    }      
    return res;
}

int main(){
    
}