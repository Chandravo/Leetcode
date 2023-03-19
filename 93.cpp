//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

vector<string> ans;
    void helper(string s, int j, int count){
        //Hit the Bottom | Base Case
        if(count == 3)
        {
            if((s[0]!= '0' or 0==j) and j+1<=3 and stoi(s.substr(0, j+1))<=255)
                ans.push_back(s);
            return;
        }
        if(j==0)
            return;

        for(int i=j; (i>0 and (i>= j-3)); i--){
            if((s[i]!= '0' or i==j) and stoi(s.substr(i, j-i+1))<=255){
                //Insert the '.' and call recursively
                s.insert(i, 1,'.');
                helper(s, i-1, count+1);
                //Backtrack
                s.erase(i, 1);
            }
        }
    }
    vector<string> restoreIpAddresses(string s) {
        helper(s, s.length()-1, 0);
        return ans;
    }

int main(){
    
}