//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int findLHS(vector<int>& nums) {
    unordered_map<int,int> m;
    for (int i:nums) m[i]++;
    int res=0;
    for (auto i:m){
        if (m.find(i.first+1)!=m.end()) res=max(res,m[i.first]+m[i.first+1]);
    }  
    return res;      
}

int main(){
    
}