//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;
bool isValid(string s) {
    if (s.size()%2!=0){
        return false;
    }
    stack<char> l;
    for (int i=0;i<s.size();i++){
        if (s[i]=='(' || s[i]=='{' || s[i]=='['){
            l.push(s[i]);
        }
        else{
            if (l.empty() || (s[i]==')' && l.top()!='(') || (s[i]=='}' && l.top()!='{') || (s[i]==']' && l.top()!='[')){
                return false;
            }
            else{
                l.pop();
            }
        }
    }
    if (!l.empty()){
        return false;
    }
    return true;        
}
int main(){
    cout<<isValid("({[{}]})");
}