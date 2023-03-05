//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int strStr(string &h, string &n) {
    short int i=0,j=0;
    while (j<h.size()){
        if (h[j]==n[0]){
            int tmp=0;
            while (tmp<n.size() && j<h.size() && h[j]==n[tmp]) {
                j++;
                tmp++;
                // cout<<"hello"<<endl;
            }
            if (tmp==n.size()) return i;
            else{
                i++;
                while (i<h.size() && h[i]!=n[0]) i++;
                j=i;
            }
        }
        else{
            j++;
            // cout<<"j = "<<j<<endl;
            i++;
        }
        // cout<<"hehe j = "<<j<<endl;
        // cout<<"world"<<endl;
    }
    return -1;
}

int main(){
    // cout<<strStr("mississippi","issip");
}