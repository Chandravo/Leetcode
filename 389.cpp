//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

char findTheDifference(string &s, string &t) {
    char res='\0';
    for (char i:s) res^=i;
    for (char i:t) res^=i;
    return res;       
}

int main(){
    
}