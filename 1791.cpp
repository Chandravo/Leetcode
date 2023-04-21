//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int findCenter(vector<vector<int>>& e) {
    if (e[0][0]==e[1][0] || e[0][0]==e[1][1]) return e[0][0];        
    else return e[0][1];        
}

int main(){
    
}