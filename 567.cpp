//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

bool checkInclusion(string s1, string s2) {
    if (s1.size()>s2.size()){
        return false;
    }        

    vector<int> v1(26,0);
    vector<int> v2(26,0);


    
    
    for (int i=0;i<s1.size();i++){
        v1[s1[i]-'a']++;
        v2[s2[i]-'a']++;
    }
    
    int matches=0,i=0,j=s1.size();

    for (int i=0;i<26;i++){
        if (v1[i]==v2[i]){
            matches++;
        }
    }
    while (j<s2.size()){
        if (matches==26){
            return true;
        }
        v2[s2[i]-'a']--;
        if (v2[s2[i]-'a']==v1[s2[i]-'a']){
            matches++;
        }
        else if (v2[s2[i]-'a']==v1[s2[i]-'a']-1){
            matches--;
        }
        
        i++;
        j++;
        v2[s2[j]-'a']++;
        if (v2[s2[j]-'a']==v1[s2[j]-'a']){
            matches++;
        }
        else if (v2[s2[j]-'a']==v1[s2[j]-'a']+1){
            matches--;
        }
    }
    return false;
}

int main(){
    cout<<checkInclusion("ab","eidboaoo");
}