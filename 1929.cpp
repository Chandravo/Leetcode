//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

vector<int> getConcatenation(vector<int>& nums) {
    vector<int> res;
    for (int i:nums){
        res.push_back(i);
    }        
    for (int i:nums){
        res.push_back(i);
    }        
    return res;
}

int main(){
    
}