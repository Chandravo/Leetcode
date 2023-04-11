//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

bool judgeCircle(string moves) {
    int l=0,u=0;
    for (char i:moves){
        if (i=='L') l++;
        if (i=='R') l--;
        if (i=='U') u++;
        if (i=='D') u--;
    }        
    return (l==0 && u==0);
}

int main(){
    
}