//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

string removeKdigits(string num, int k) {
    if (num.size()<=k){
        return "0";
    }        
    if (k==0){
        return num;
    }
    string s;
    // vector<char> s;
    for (int i=0;i<num.size();i++){
        while (s.size()!=0 && k>0 && num[i]<s.back()){
            s.pop_back();
            k--;
        }
        s.push_back(num[i]);
        cout<<s<<endl;
        if ((s.size()==1) && (num[i]=='0')){
            s.pop_back();

        }
    }
    while (k!=0 && s.size()!=0){
        s.pop_back();
        k--;
    }
    if (s.size()==0){
        return "0";
    }
    return s;

}

int main(){
    cout<<removeKdigits("16549872",3);
}