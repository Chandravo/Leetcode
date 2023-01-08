//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

const int mod = (int)1e9 + 7;
int maxPerformance(int n, vector<int>& s, vector<int>& e, int k) {
    vector<pair<int,int>> v;
    for (int i=0;i<s.size();i++){
        v.push_back(pair(e[i],s[i]));
    }
    sort(v.rbegin(),v.rend());
    priority_queue<int,vector<int>,greater<int>> minh;
    long long summ=0,res=0;
    for (auto i:v){
        summ+=i.second;
        minh.push(i.second);
        if (minh.size()>k){
            summ-=minh.top();
            minh.pop();
        }
        int eff=i.first;
        res=max(res,summ*eff);

    }
    return (int)(res%mod);

}

int main(){
    
}