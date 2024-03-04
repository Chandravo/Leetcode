//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int bagOfTokensScore(vector<int>& tokens, int power) {
    sort(tokens.begin(), tokens.end());
    // for (auto i:tokens) cout<<i<<" ";
    int l = 0, r = tokens.size()-1;
    int score = 0, res = 0;
    while (l<=r){
        // cout<<"token = "<<tokens[l]<<endl;
        if (tokens[l]>power){
            if (score>0 && power + tokens[r]>=tokens[l]){
                power+=tokens[r];
                r--;
                score --;
            }
            else break;
        }
        else{
            power-=tokens[l];
            l++;
            score++;
            res = max(score, res);
        }
        // cout<<score<<" "<<power<<endl;
    }
    return res;
}

int main(){
    
}