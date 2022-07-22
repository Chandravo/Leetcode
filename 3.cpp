//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;
int lengthOfLongestSubstring(string s) {
    int l=-1,res=0;
    vector<int> temp(256,-1);
    for (int i=0;i<s.size();i++){
        if (temp[s[i]]>l){
            l=temp[s[i]];
        }
        temp[s[i]]=i;
        res=max(res,i-l);
    }

    
    return res;
}
int main(){
    string s="bbba";
    cout<<lengthOfLongestSubstring(s);
}