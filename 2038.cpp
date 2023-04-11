//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

char getPrev(string &s, int i){
    i=i-1;
    while (i>=0){
        if (s[i]=='.'){
            i--;
        }
        else{
            return s[i];
        }
    }
    return '0';
}
char getNext(string &s, int i){
    i=i+1;
    while (i<s.size()){
        if (s[i]=='.'){
            i++;
        }
        else{
            return s[i];
        }
    }
    return '0';
}

    bool winnerOfGame(string colors) {
        long long cntA = 0, cntB = 0, alice = 0, bob = 0;
        for(char c : colors) {
            if(c == 'A') {
                cntA++;
                if(cntA >= 3) alice += cntA - 2;
                cntB = 0;
            }
            else {
                cntB++;
                if(cntB >= 3) bob += cntB - 2;
                cntA = 0;
            }
        }
        return alice > bob;
    }
           


int main(){
    cout<<winnerOfGame("ABBBBBBBAAA");
}