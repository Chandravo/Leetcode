//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

class TimeMap {
    unordered_map<string,vector<pair<int,string>>> f;
public:
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        f[key].push_back({timestamp,value});
    }
    
    string get(string key, int timestamp) {
        if (f.find(key)==f.end()){
            return "";
        }
        int l=0,r=f[key].size()-1;
        while (l<=r){
            int mid=l+(r-l)/2;
            if (f[key][mid].first>timestamp){
                r=mid-1;
            }
            else if(f[key][mid].first<timestamp){
                l=mid+1;
            }
            else{
                return f[key][mid].second;
            }
        }
        if (r>=0){
            return f[key][r].second;
        }
        return "";
    }
};

int main(){
    
}