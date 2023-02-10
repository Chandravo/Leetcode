//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

string defangIPaddr(string s) {
    string res="";
    for (char i:s){
        if (i=='.') res+="[.]";
        else res+=i;
    }        
    return res;
}

int main(){
    
}