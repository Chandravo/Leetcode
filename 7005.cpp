//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

bool checkStrings(string s1, string s2) {
    for (int i=0;i<s1.size();i++){
        if (s1[i]!=s2[i]){
            int ind = -1;
            for (int j=i+2;j<s2.size();j+=2){
                if (s1[i]==s2[j]){
                    ind = j;
                    break;
                }
            }
            if (ind==-1) return false;
            swap(s2[i],s2[ind]);
        }
    }   
    return true;     
}

int main(){
    
}