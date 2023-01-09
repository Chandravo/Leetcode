//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

string convertToTitle(int n) {
    string res="";
    while (n!=0){
        res=(char)(--n%26+'A')+res;
        n=n/26;
    }        
    return res;
}

int main(){
    
}