//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

void generate(int n,int o,int c,string s,vector<string> &r){
    if (o==n && c==n){
        r.push_back(s);
        return;
    }
    if (o<n){
        generate(n,o+1,c,s+'(',r);
    }
    if (o>c){
        generate(n,o,c+1,s+')',r);
    }
}

vector<string> generateParenthesis(int n) {
    vector<string> res;
    generate(n,0,0,"",res);
    return res;

}




int main(){
    vector<string> ans=generateParenthesis(3);
   
    // for (int i=0;i<ans.size();i++){
    //     cout<<ans[i]<<endl;
    // }  
    for (auto i:generateParenthesis(3)){
        cout<<i<<" ";
    } 
}