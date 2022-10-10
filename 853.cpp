//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

int carFleet(int target, vector<int>& position, vector<int>& speed) {
    vector<pair<int,double>> heheheha;
    for (int i=0;i<position.size();i++){
        double time=(double)(target-position[i])/speed[i];
        heheheha.push_back({position[i],time});
    }
    sort(heheheha.begin(),heheheha.end());

    double maxTime=0.0;
    int res=0;
    for (int i=position.size()-1;i>=0;i--){
        double time=heheheha[i].second;
        if (time>maxTime){
            maxTime=time;
            res++;
        }
    }
    return res;
}   

int main(){
    vector<int> pos={0,4,2};
    vector<int> speed={2,1,3};
    int target=10;
    cout<<carFleet(target,pos,speed);
}