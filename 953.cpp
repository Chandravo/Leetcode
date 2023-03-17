//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

short int get_index(char x, string &order){
    for (short int i=0;i<26;i++){
        if (order[i]==x) return i;
    }
    return -1;
}

bool checksmall(string &s1, string &s2, string &order){
    short int i=0;
    while (i<s1.size() && i<s2.size()){
        if (s1[i]!=s2[i]){
            return get_index(s1[i],order)<get_index(s2[i],order);
        }
        
        i++;
    }
    return s1.size()<=s2.size();
}

bool isAlienSorted(vector<string>& words, string &order) {
    for (short int i=0;i<words.size()-1;i++){
        if (!checksmall(words[i],words[i+1],order)) {
            cout<<i<<" lol"<<endl;
            return false;
        }
    }
    return true;
}

int main(){
    vector<string> w{"reb","inci"};
    string ord = "tcyklqfhoeapndgbimsujzvxwr";
    cout<<isAlienSorted(w,ord)<<endl;
    cout<<(get_index('r',ord))<<endl;
    cout<<(get_index('i',ord))<<endl;
    cout<<(get_index('r',ord)<get_index('i',ord))<<endl;
}