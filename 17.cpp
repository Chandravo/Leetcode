//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;


vector<vector<char>> m{{},{},{'a','b','c'},{'d','e','f'},{'g','h','i'},{'j','k','l'},{'m','n','o'},{'p','q','r','s'},{'t','u','v'},{'w','x','y','z'}};
void helper(string &digits, int ind1, string tmp, vector<string> &res){
    // cout<<"index = "<<ind1<<endl;
    if (ind1==digits.size()){
        res.push_back(tmp);
        return ;
    }
    int digit = digits[ind1]-48;
    // cout<<"digit = "<<digit<<endl;
    for (int i=0;i<m[digit].size();i++){
        tmp.push_back(m[digit][i]);
        helper(digits,ind1+1,tmp,res);
        tmp.pop_back();
    }
}

vector<string> letterCombinations(string digits) {
    if (digits.size()==0) return {};
    vector<string> res;

    helper(digits,0,"",res);
    return res;
}

int main(){
    string d="23";
    for (auto i:letterCombinations(d)){
        cout<<i<<endl;
    }
}