//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

bool hasAllCodes(string s, int k) {
    unordered_set<string> us;
    for (int i=0;i<s.size()-k;i++){
        us.insert(s.substr(i,k));
    }        
    return (us.size()==pow(2,k));
}

int main(){
    
}