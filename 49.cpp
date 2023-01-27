//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;
// string getKey(string s){
//     vector<int> a(26);
//     for (int i=0;i<s.length();i++){
//         a[s[i]-'a']++;
//     }
//     string key="";
//     for (int i=0;i<26;i++){
//             key+=to_string(a[i]+'a');
//     }
//     return key;
// }
// vector<vector<string>> groupAnagrams(vector<string>& strs) {
//     unordered_map<string,vector<string>> a;
//     for (int i=0;i<strs.size();i++){
//         string key=getKey(strs[i]);
//         a[key].push_back(strs[i]);

//     }
//     vector<vector<string>> res;
//     for (auto i:a){
//         res.push_back(i.second);
//     }
//     return res;
// }

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string,vector<int>> m;
    for (int i=0;i<strs.size();i++){
        string tmp = strs[i];
        sort(tmp.begin(),tmp.end());
        m[tmp].push_back(i);
    }        
    vector<vector<string>> ans;
    for (auto i:m){
        vector<string> t{};
        for (auto j:i.second){
            t.push_back(strs[j]);
        }
        ans.push_back(t);
    }
    return ans;
}

int main(){
    
}