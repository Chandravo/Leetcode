//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

vector<int> selfDividingNumbers(int left, int right) {
    vector<int> res;
    for (int i=left;i<=right;i++){
        int n=i;
        for (n=i;n>0;n/=10){
            if ((n%10==0) || i%(n%10)) break;
        }
        if (!n) res.push_back(i);
    }
    return res;
}

int main(){
    
}