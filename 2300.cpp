//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
    sort (potions.begin(),potions.end());
    for (int i=0;i<spells.size();i++){
        spells[i]= potions.size() - (lower_bound(potions.begin(),potions.end(),ceil((double)success/spells[i]))-potions.begin());
    }
    return spells;
}

int main(){
    
}