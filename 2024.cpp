//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int maxConsecutiveAnswers(string ak, int k) {
    int res=0;
    // checking for longest T
    int i=0,j=0;
    int tk=0;
    while (j<ak.size()){
        if (ak[j]=='F'){
            tk++;
            if (tk>k){
                while (i<ak.size() && ak[i]=='T') i++;
                i++;
                tk--;
            }
        }
        res=max(res,j-i+1);
    }   

    // checking for longest F
    i=0,j=0,tk=0;
        while (j<ak.size()){
        if (ak[j]=='T'){
            tk++;
            if (tk>k){
                while (i<ak.size() && ak[i]=='F') i++;
                i++;
                tk--;
            }
        }
        res=max(res,j-i+1);
    }
    return res;
}

int main(){
    
}