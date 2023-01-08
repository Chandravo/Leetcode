//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int maxPoints(vector<vector<int>>& points) {
    if (points.size()==1){
        return 1;
    }
    int res=0;
    for (int i=0;i<points.size();i++){
        unordered_map<double,int> f;
        for (int j=i+1;j<points.size();j++){
            if (points[i][0]==points[j][0]){
                f[100001]++;
            }
            double slp=(double)(points[i][1]-points[j][1])/(points[i][0]-points[j][0]);
            f[slp]++;
        }
        int tmpres=0;
        for (auto j:f){
            tmpres=max(tmpres,j.second+1);
        }
        res=max(tmpres,res);
    }        
    return res;
}

int main(){
    
}