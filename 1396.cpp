//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

class UndergroundSystem {
    unordered_map<int,pair<string,int>> chkin;
    unordered_map<string,pair<int,int>> route;
public:
    UndergroundSystem() {
    }
    
    void checkIn(int id, string stationName, int t) {
        chkin[id]={stationName,t};
    }
    
    void checkOut(int id, string stationName, int t) {
        string s=chkin[id].first+"-"+stationName;
        route[s].first+=t-chkin[id].second;
        route[s].second++;
        chkin.erase(id);
    }
    
    double getAverageTime(string startStation, string endStation) {
        string s = startStation+"-"+endStation;
        return (double)route[s].first/(double)route[s].second;
    }
};

int main(){
    
}