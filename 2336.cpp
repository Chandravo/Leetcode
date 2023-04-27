//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

class SmallestInfiniteSet {
    int curr;
    set<int> s;
public:
    SmallestInfiniteSet() {
        curr=1;
    }
    
    int popSmallest() {
        int res;
        if (!s.empty()){
            res=*s.begin();
            s.erase(s.begin());
        }
        else{
            res=curr;
            curr++;
        }
        return res;
    }
    
    void addBack(int num) {
        if (num<curr) s.insert(num);
    }
};

int main(){
    
}