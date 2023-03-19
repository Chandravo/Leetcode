//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

class MyHashMap {
    int f[1000001];
public:
    MyHashMap() {
        memset(f,-1,1000000);
    }
    
    void put(int key, int value) {
        f[key]=value;
    }
    
    int get(int key) {
        return f[key];
    }
    
    void remove(int key) {
        f[key]=-1;
    }
};


int main(){
    
}