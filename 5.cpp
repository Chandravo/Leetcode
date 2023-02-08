//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

string longestPalindrome(string s) {
    int len=1,start=0;
    for (int i=0;i<s.size();i++){
        int l=i,r=i;
        while (l>=0 && r<s.size() && s[l]==s[r]){
            l--;
            r++;
        }
        if (r-l-1>len){
            start=l+1;
            len=r-l-1;
        }
        l=i,r=i+1;
        while (l>=0 && r<s.size() &&s[l]==s[r]){
            l--;r++;
        }
        if (r-l-1>len){
            start=l+1;
            len=r-l-1;
        }

    }        
    cout<<start<<" "<<len<<endl;
    return s.substr(start,len);
}

int main(){
    cout<<longestPalindrome("ccc")<<endl;
}