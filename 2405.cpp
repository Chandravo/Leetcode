//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int partitionString(string s) {
    unordered_set<char> f;
    int res=0;
    for (char i:s){
        if (f.find(i)==f.end()) f.insert(i);
        else{
            res++;
            f.clear();
            f.insert(i);
        }
    }        
    return res+1;
}

int main(){
    
}