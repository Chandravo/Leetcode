//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

vector<string> uncommonFromSentences(string s1, string s2) {
    unordered_map<string,int> mp;
    string temp;
    for (int i=0;i<=s1.size();i++){
        if (i==s1.size() || s1[i]==' '){
            mp[temp]++;
            temp="";
        }
        else temp+=s1[i];
    }        
    temp="";
    for (int i=0;i<=s2.size();i++){
        if (i==s2.size() || s2[i]==' '){
            mp[temp]++;
            temp="";
        }
        else temp+=s2[i];
    }  
    vector<string> res;

    for (auto i:mp){
        if (i.second==1) res.push_back(i.first); 
        // cout<<i.first<<" "<<i.second<<endl;
    }
    return res;
}

int main(){
    vector<string> res=uncommonFromSentences("this apple is sweet","this apple is sour");
    for (auto i:res) cout<<i<<" ";
}