//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

string smallestString(string s) {
    // int la=INT_MAX;
    // for (int i=0;i<s.size();i++){
    //     if (s[i]=='a') la=i;
    // }
    // if (la==0){
    //     for (int i=1;i<s.size();i++){
    //         s[i]=(char)(s[i]-1);
    //     }
    //     return s;
    // }
    // for (int i=0;i<s.size();i++){
    //     if (i<la) s[i]=(char)(s[i]-1);
    // }
    // return s;

    int start =-1;
    for (int i=0;i<s.size();i++){
        if (s[i]!='a'){
            start=i;
            break;
        }
    }
    if (start==-1) {
        s[s.size()-1]='z';
        // return s;
    }
    else{
        for (int i=start;i<s.size();i++){
            if (s[i]!='a') s[i]=(char)(s[i]-1);
            else break;
        }
        // return s;
    }
    return s;

}

int main(){
    cout<<smallestString("acbbc")<<endl;
}