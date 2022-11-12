//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

string minWindow(string s, string t) {
    string res="";
    if (t.size()>s.size()){
        return res;
    }
    
    int i=0,j=0;
    unordered_map<char,int> hola;
    for (char i:t){
        hola[i]++;
    }
    int start=0;
    int len=INT_MAX;
    int cnt=t.size();
    while (j<s.size()){
        if (hola.find(s[j])!=hola.end()){
            if (hola[s[j]]>0){
                cnt--;
            }
            hola[s[j]]--;
        }
        j++;
        while (cnt==0){
            if (j-i<len){
                start=i;
                len=j-i;
            }
            if (hola.find(s[i])!=hola.end()){
                hola[s[i]]++;
                if (hola[s[i]]>0){
                    cnt++;
                }
            }
            
            i++;
        }
        // cout<<i<<" "<<j<<endl;
    }
    if (len!=INT_MAX){
        return s.substr(start,len);
    }
    return "";

}

int main(){
    string s="A";
    string t="AA";
    cout<<minWindow(s,t);
}