//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

string res="";

bool helper(unordered_set<string> &f,string s){
    if (s.size()==f.size()){
        if (f.find(s)==f.end()) {
            res=s;    
            return true;
        }
        else return false;
    }
    return helper(f,s+'1') || helper(f,s+'0');
}

string findDifferentBinaryString(vector<string>& nums) {
    unordered_set<string> f(nums.begin(),nums.end());
    helper(f,"");
    return res;
}

int main(){
    
}