//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

string kthDistinct(vector<string>& arr, int k) {
    int curr = 0;
    unordered_map<string,int> f;
    for (auto &i:arr) f[i]++;
    for (auto &i:arr) {
        if (f[i]==1){
            curr++;
            if (curr==k){
                return i;
            }
        }
    }
    return "";
}

int main(){
    
}