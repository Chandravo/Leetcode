//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

bool isSubsequence(string s, string t) {
    if (s==""){
        return true;
    }
    int j=0;
    for (char i:t){
        if (s[j]==i){
            j++;
        }
        if (j>=s.size()){
            return true;
        }
    }   
    return false;     
}

int main(){
    cout<<isSubsequence("abc","ahbgd");
}