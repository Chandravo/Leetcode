//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;
int numMatchingSubseq(string s, vector<string>& words) {
    unordered_map<char,int> cnt;
    unordered_map<char,int> pos;
    int res=0;
    for (int i=0;i<s.length();i++){
        cnt[s[i]]++;
        if (pos.find(s[i])==pos.end()){
            pos[s[i]]=i;
        }
    }
    for (int i=0;i<words.size();i++){
        unordered_map<char,int> cnt1;
        int f=0;
        for (int j=0;j<words[i].length();j++){
            if (pos.find(words[i][j])!=pos.end()){
                if (j!=0 && pos[words[i][j-1]]<i){
                    cnt1[words[i][j]]++;
                }
            }
        }
        for (auto i=cnt.begin();i!=cnt.end();i++){
            if (cnt1.find(i->first)==cnt1.end() || cnt1[i->first]!=cnt[i->first]){
                f=1;
                break;
            }
        }
        if (f==0){
            res++;
        }


    }

    // for (auto i=cnt.begin();i!=cnt.end();i++){
    //     cout<<i->first <<" "<<i->second <<endl;

    // }
    // for (auto i=pos.begin();i!=pos.end();i++){
    //     cout<<i->first <<" "<<i->second <<endl;

    // }
    return res;

}
int main(){
    vector<string> words{"a","bb","acd","ace"};
    cout<<numMatchingSubseq("abcde",words);
}