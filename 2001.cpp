//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

long long interchangeableRectangles(vector<vector<int>>& r) {
    long long int res=0;
    unordered_map<double,long long int> f;
    for (short int i=0;i<r.size();i++){
        double ratio = (double)r[i][1]/(double)r[i][0];
        if (f.find(ratio)!=f.end()){
            res+=f[ratio];
        }
        f[ratio]++;
    }        
    
    return res;
}

int main(){
    vector<vector<int>> r{{4,8},{3,6},{10,20},{15,30}};
    cout<<endl<<interchangeableRectangles(r);
}