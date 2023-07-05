//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int edgeScore(vector<int>& edges) {
    int n = edges.size();
    vector<int> score (n,0);
    for (int i=0;i<n;i++){
        score[edges[i]]+=i;
    }        
    auto it = max_element(score.begin(),score.end());
    return (it-score.begin());
}

int main(){
    
}