//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

class SnapshotArray {
public:
unordered_map<int,map<int,int>> mp;
int snap;
    SnapshotArray(int length) {
        snap=0;
    }
    
    void set(int index, int val) {
        mp[index][snap]=val;
    }
    
    int snap() {
        return snap++;
    }
    
    int get(int index, int snap_id) {
        auto it = mp[index].upper_bound(snap_id);
        return (it==mp[index].begin())? 0 : prev(it)->second; 
    }
};

int main(){
    
}