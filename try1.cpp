//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;
struct comp{
    inline bool operator() (int a, int b){
        return a+b>b+a; 
    }
};
int main(){
    vector<vector<int>> a{{1,3},{2,4},{1,2},{2,5}};
    sort(a.begin(),a.end());
    for (int i=0;i<a.size();i++) cout<<a[i][0]<<" "<<a[i][1]<<endl;
}