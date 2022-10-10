//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;
string removeDuplicateLetters(string s) {
    unordered_map<char,int> fmap;
    string res;
    unordered_set<char> cnt;
    for (int i=0;i<s.length();i++){
        fmap[s[i]]++;
    }
    res+=s[0];
    cnt.insert(s[0]);
    for (int i=1;i<s.length();i++){
        if ((int)s[i]<(int)res[res.length()-1] && cnt.find(s[i])==cnt.end()){
            if (fmap[])
        }
    }
    return res;
} 
int main(){
    string s="cbacdcbc";
    //cout<<removeDuplicateLetters(s);
    unordered_set<char> a;
    a.insert('a');
    a.insert('b');
    //a.erase(prev(a.begin()));
    for (auto i=a.begin();i!=a.end();i++){
        cout<<*i;
    }
    
}