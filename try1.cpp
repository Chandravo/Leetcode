//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;
struct comp{
    inline bool operator() (int a, int b){
        return a+b>b+a; 
    }
};
int main(){
    vector<int> a{3,30,34,5,9};
    sort(a.begin(),a.end(),comp());
    for (auto i:a) cout<<i<<" ";
}