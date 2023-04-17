//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    int maxx=*max_element(candies.begin(),candies.end());
    vector<bool> res(candies.size());
    for (int i=0;i<candies.size();i++){
        if (candies[i]+extraCandies>=maxx) res[i]=1;
        else res[i]=0;
    }        
    return res;
}

int main(){
    
}