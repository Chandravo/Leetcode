//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;
bool isAnagram(string s, string t) {
    unordered_map <char,int> ss;
    unordered_map <char,int> tt;
    int l=0;
    if (s.length()==t.length()){
        l=s.length();
    }
    else{
        return false;
    }
    for (int i=0;i<l;i++){
        ss[s[i]]++;
        tt[t[i]]++;
    }
    for (auto i:ss){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;
    for (auto i:tt){
        cout<<i.first<<" "<<i.second<<endl;
    }

    
    for (auto i :ss){
        auto ttt=tt.find(i.first);
        cout<<ttt->first<<" "<<ttt->second<<endl;
        cout<<tt[i.first]<<endl;
        cout<<i.second<<endl;
        if (tt.find(i.first)==tt.end() || tt[i.first]!=i.second ){
            
            cout<<"break at "<<i.first<<" "<<i.second<<endl;
            return false;
        }
    }
    return true;


}
int main(){
    string s="anagram";
    string t="nagaram";
    cout<<isAnagram(s,t);
}