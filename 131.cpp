//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

bool check_palindrome(string &s, int start, int end){
    while (start<=end){
        if (s[start]!=s[end]) return false;
        start++;end--;
    }
    return true;
}

void helper(vector<vector<string>> &res, string &s, int ind, vector<string> &temp){
    if (ind==s.size()) {
        res.push_back(temp);
        return ;
    }
    string t="";
    for (int i=ind;i<s.size();i++){
        if (check_palindrome(s,ind,i)){
            t=s.substr(ind,i-ind+1);
            temp.push_back(t);
            helper(res,s,i+1,temp);
            temp.pop_back();
        }
    }
}

vector<vector<string>> partition(string s) {
    vector<vector<string>> res;
    vector<string> temp;
    helper(res,s,0,temp);
    return res;
}

int main(){
    string s="abab";
    int i=2;
    cout<<s.substr(0,i+1)<<endl;
}