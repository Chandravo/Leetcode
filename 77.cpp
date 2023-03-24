//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> res;

void helper(int &n, int &k, vector<int> &vec, int ind){
    if (vec.size()==k) {
        res.push_back(vec);
        return ;
    }
    for (int i=ind;i<=n;i++){
        vec.push_back(i);
        helper(n,k,vec,i+1);
        vec.pop_back();
    }
}

vector<vector<int>> combine(int n, int k) {
    vector<int> vec;
    helper(n,k,vec,1);
    return res;
}

int main(){
    
}