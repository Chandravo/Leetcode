//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int maxVowels(string s, int k) {
    unordered_set<char> v;
    v.insert('a');        
    v.insert('e');        
    v.insert('i');        
    v.insert('o');        
    v.insert('u');
    int i=0,j=0;
    int res=0,curr=0;
    while (j<s.size()){
        if (v.count(s[j])) curr++;
        
        cout<<i<<" "<<j<<endl;
        if (j-i+1>k){
            if (v.count(s[i])) curr--;
            i++;
        }
        j++;
        cout<<curr<<endl;;
        res=max(res,curr);
    }  
    return res;      
}

int main(){
    cout<<maxVowels("abciiidef",3)<<endl;
}