//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;
vector<int> dailyTemperatures(vector<int>& temperatures) {
    vector<int> res(temperatures.size(),0);
    vector<pair<int,int>> a;
    pair<int,int> s;
    for (int i=0;i<temperatures.size();i++){
        while (a.size()!=0 && temperatures[i]>a.back().first){
            res[a.back().second]=i-a.back().second;
            a.pop_back();
        }
        s.first=temperatures[i];
        s.second=i;
        a.push_back(s);
    }
    return res;      
}
int main(){
    vector<int> t{73,74,75,71,69,72,76,73};
    for(int i:dailyTemperatures(t)){
        cout<<i<<" ";
    }
}