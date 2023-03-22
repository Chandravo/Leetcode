//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

bool repeatedSubstringPattern(string s) {
    string t=s+s;
    if(t.substr(1,t.size()-2).find(s)!=-1)
        return true;
    return false;
}

int main(){
    
}