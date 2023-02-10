//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

bool isVowel(char ch) {
    return
        ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U';
}

string reverseVowels(string s) {
    int l=0,r=s.size()-1;
    while (l<r){
        while (l<r && !isVowel(s[l])) l++;
        while (l<r && !isVowel(s[r])) r--;
        if (l<r) swap(s[l++],s[r--]);
    }     
    return s;   
}

int main(){
    
}