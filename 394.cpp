//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

string decode(string &s,int &i){
    string res;
    while (i<s.size() && s[i]!=']'){
        if (!isdigit(s[i])){
            res+=s[i];
            i++;
        }
        else{
            int k=0;
            while (i<s.size() && isdigit(s[i])){
                k=k*10+s[i]-'0';
                i++;
            }
            i++;
            string temp=decode(s,i);
            i++;
            while (k--){
                res+=temp;
            }
        }
    }
    return res;
}

string decodeString(string s) {
    string res;
    int i=0;
    return decode(s,i);
}

int main(){
    
}