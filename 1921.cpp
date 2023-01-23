//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
    vector<int> tm(dist.size());
    for (int i=0;i<dist.size();i++){
        tm[i]=(ceil((double)dist[i]/(double)speed[i]));
    }      
    sort(tm.begin(),tm.end());
     
    int time=1;
    for (int i=0;i<speed.size();i++){
        if (time>tm[i]){
            return i;
        }
        time++;
    }
    
    return speed.size();
}

int main(){
    
}