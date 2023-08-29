//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

bool comp(vector<int> &a, vector<int> &b){
    return a[1]<b[1];
}

int findLongestChain(vector<vector<int>>& pairs) {
    sort(pairs.begin(),pairs.end(),comp);
    int res=1;
    for (int i=1;i<pairs.size();i++){
        if (pairs[i][0]>pairs[i-1][1]) res++;
    }
    return res;
}

int main(){
    
}