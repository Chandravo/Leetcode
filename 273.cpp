//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

string numberToWords(int num) {
    unordered_map<string,string> tens;
    unordered_map<char,string> other;
    unordered_map<char,string> ones;
    tens = {
        
        {"10", "Ten"},
        {"11", "Eleven"},
        {"12", "Twelve"},
        {"13", "Thirteen"},
        {"14", "Fourteen"},
        {"15", "Fifteen"},
        {"16", "Sixteen"},
        {"17", "Seventeen"},
        {"18", "Eighteen"},
        {"19", "Nineteen"}

    };

    other = {
        {'2', "Twenty"},
        {'3', "Thirty"},
        {'4', "Forty"},
        {'5', "Fifty"},
        {'6', "Sixty"},
        {'7', "Seventy"},
        {'8', "Eighty"},
        {'9', "Ninety"},
    };
    ones ={
        {'0', "Zero"},
        {'1', "One"},
        {'2', "Two"},
        {'3', "Three"},
        {'4', "Four"},
        {'5', "Five"},
        {'6', "Six"},
        {'7', "Seven"},
        {'8', "Eight"},
        {'9', "Nine"},
    };
    string sn = to_string(num);
    int x = sn.size()%3;
    string t = "";
    while (x--){
        t.push_back('0');
    }
    sn=t+sn;
    int n = sn.size();
    t = "";
    string res = "";
    for (int i=0;i<sn.size();i++){
        if (i%3==0){
            res+=t;
            t = "";
            if (sn[i]=='0') continue;
            else{
                res.push_back(ones[sn[i]])
            }
        }
    }
}

int main(){
    
}