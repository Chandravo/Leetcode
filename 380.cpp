//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;
// ["RandomizedSet","insert","insert","remove","insert","remove","getRandom"]
class RandomizedSet {
public:
    vector<int> v;
    unordered_map<int,int> m;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if (m.find(val)!=m.end()) return false;
        v.push_back(val);
        m[val] = v.size()-1;
        return true;
    }
    
    bool remove(int val) {
        if (m.find(val)==m.end()) return false;
        swap(v[m[val]],v[v.size()-1]);
        m[v[v.size()-1]]=m[val];
        v.pop_back();
        m.erase(val);
        return true;
    }
    
    int getRandom() {
        return v[rand()%v.size()];
    }
};

int main(){
    
}