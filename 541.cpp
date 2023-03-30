//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

string reverseStr(string &s, int k) {
    int i=0;
    while (i<s.size()){
        if (i+k<=s.size()){
            reverse(s.begin()+i,s.begin()+i+k);
        }
        else{
            reverse(s.begin()+i,s.end());
        }
        i+=2*k;
        
    }  
    return s;      
}   

int main(){
    
}