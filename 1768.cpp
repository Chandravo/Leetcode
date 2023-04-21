//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

string mergeAlternately(string word1, string word2) {
    int i=0,j=0;
    bool hehe=true;
    string res;
    while (i<word1.size() && j<word2.size()){
        if (hehe) res.push_back(word1[i++]);
        else res.push_back(word2[j++]);
        hehe=!hehe;
    }        
    while (i<word1.size()){
        res.push_back(word1[i]);
        i++;
    }
    while (j<word2.size()){
        res.push_back(word2[j]);
        j++;
    }
    return res;

}

int main(){
    
}