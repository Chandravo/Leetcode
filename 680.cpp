//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

bool is_p(string s,int i,int j){
    while(i<j){
        if (s[i]==s[j]){
            i++;j--;
        }
        else{
            return false;
        }
    }
    return true;
}

bool validPalindrome(string s) {
    if (s.size()<=1){
        return true;
    }
    int i=0,j=s.size()-1;
    while (i<j){
        if (s[i]==s[j]){
            i++;j--;
        }
        else{
            return is_p(s,i+1,j) || is_p(s,i,j-1);
        }
    }
    return true;
}



int main(){
    cout<<validPalindrome("aguokepatgbnvfqmgmlcupuufxoohdfpgjdmysgvhmvffcnqxjjxqncffvmhvgsymdjgpfdhooxfuupuculmgmqfvnbgtapekouga");
}