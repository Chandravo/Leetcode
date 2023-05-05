//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

string removeOuterParentheses(string s) {
    string res;
    int b=1;
    for (int i=1;i<s.size();i++){
        if (s[i]=='(') b++;
        else b--;
        if (b==0) b++,i++;
        else res.push_back(s[i]);
    } 
    return res;       
}

int main(){
    
}