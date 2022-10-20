//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;
int maxNumberOfBalloons(string text) {
    unordered_map<char,int> lmao;
    for (char i:text){
        if (i=='b' || i=='a' || i=='l' || i=='o' || i=='n'){
            lmao[i]++;
        }
    }        
    return min({lmao['b'],lmao['a'],lmao['l']/2,lmao['o']/2,lmao['n']});
}
int main(){
    cout<<maxNumberOfBalloons("loonbalxballpoon");
}