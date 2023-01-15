//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
    unordered_set<int> f;
    for (int i=0;i<triplets.size();i++){
        if (triplets[i][0] > target[0] || triplets[i][1] > target[1] || triplets[i][2] > target[2]){
            continue;
        }
        for (int j=0;j<3;j++){
            if (triplets[i][j]==target[j]){
                f.insert(j);
            }
        }
    }     
    return f.size()==3;
}

int main(){
    
}