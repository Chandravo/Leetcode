//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

long solve(vector<int> exe){
    long res=0;
    unordered_map<int,int> f;
    for (int i:exe) f[i]++;
    for (auto i:f){
        int org =i.first;
        while (i.second && org){
            res+=org;
            org=ceil((double)org/2L);
            i.second--;
        }
    }
    return res;
}

int main(){
    vector<int> exe{8,4,4,8,2};
    cout<<solve(exe)<<endl;
}